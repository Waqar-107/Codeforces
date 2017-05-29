#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
        int i,j,k;
        int n,count=0;

        cin>>n;
        map<char,int> mp;
        char s[n][n];

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>s[i][j];
                mp[s[i][j]]++;
            }
        }

        if(mp.size()!=2)
        {
            cout<<"NO"<<endl;
            return 0;
        }

        int x=-1,o=-1;
        char cx,co;
        map<char,int>::iterator p=mp.begin();
        while(p!=mp.end())
        {
            if(p->second==(2*n-1))
            {
                x=p->second;
                cx=p->first;
            }

            else
            {
                o=p->second;
                co=p->first;
            }

                p++;
        }
//cout<<x<<" "<<o<<endl;
        if(x+o==n*n)
        {
            for(i=0;i<n;i++)
            {
                if(s[i][i]==cx)
                    count++;
            }

            for(i=0;i<n;i++)
            {
                if(s[i][n-i-1]==cx)
                    count++;
            }
//cout<<count;
            if(x==count-1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }

        else
            cout<<"NO"<<endl;

        return 0;
}
