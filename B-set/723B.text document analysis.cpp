#include<bits/stdc++.h>
using namespace std;
int main()
{
        int i,j,k,n;
        char s[500];
        int count=0,pcount=0;
        vector<int>np;
        bool bracket=false;

        cin>>n>>s;

        np.push_back(0);

        for(i=0;i<n;i++)
        {
            if(s[i]=='(')
                bracket=true;

            if(bracket==false)
            {
                //cout<<isalpha(s[i])<<"  "<<s[i]<<endl;

                if(isalpha(s[i])!=0 && (s[i+1]=='_' || s[i+1]=='('))
                {
                    count++;
                    np.push_back(count);
                    count=0;
                    continue;
                }

                else if(isalpha(s[i])!=0 && s[i+1]!='_' && i<n-1)
                {
                    count++;
                }

                else if(isalpha(s[i])!=0 && i==n-1)
                {
                    count++;
                    np.push_back(count);
                }
            }

            else
            {
                //cout<<isalpha(s[i])<<"  "<<s[i]<<endl;

                if(isalpha(s[i])!=0 && s[i+1]=='_')
                {
                    //cout<<"ii"<<endl;
                    pcount++;
                }

                else  if(isalpha(s[i])!=0 && s[i+1]==')')
                {
                    //cout<<" ell "<<endl;
                    pcount++;
                    bracket=false;
                }

            }

            if(s[i+1]==')')
                bracket=false;
        }

        sort(np.begin(),np.end());

        cout<<np.back()<<" "<<pcount<<endl;

        return 0;
}
