/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in\n");
#define inf 1000000000000
#define fr(a) for(i=0;i<n;i++)

#define mm 1000000007

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    int i,j,k;
    int n;

    string s,t,str;
    vector<string> ss;

    cin>>n;
    while(n)
    {
        cin>>s;

        if(s=="pwd")
        {
            cout<<'/';
            for(i=0;i<ss.size();i++)
                cout<<ss[i]<<"/";

            cout<<endl;
        }

        else
        {
            cin>>t;

            if(t[0]=='/')
                ss.clear();

            for(i=0;i<t.length();i++)
            {
                if(t[i]=='.' && t[i+1]=='.')
                {
                    i++;

                    if(ss.size()>0)
                        ss.pop_back();
                }

                else if(t[i]=='/')
                {
                    if(str.length()>0)
                        ss.push_back(str);

                    str.clear();
                }

                else
                    str.push_back(t[i]);
            }

            if(str.length()>0)
            {
                ss.push_back(str);str.clear();
            }
        }

        n--;
    }

    return 0;
}
