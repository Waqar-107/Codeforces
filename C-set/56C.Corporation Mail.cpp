/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in\n");
#define inf 1000000000000

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    int i,j,k;
    int n,count=0;

    string s,t;

    cin>>s;

    map<string,int> mp;
    stack<string> ss;

    for(i=0;i<s.length();i++)
    {
        if(s[i]=='.' || s[i]==',' || s[i]==':')
        {
            if(s[i]==',')
            {
                t.clear();
                continue;
            }

            if(t.length()>0)
            {
                //cout<<t<<endl;
                mp[t]++;//cout<<mp[t]<<endl;
                ss.push(t);

                if(mp[t]>1)
                    count+=(mp[t]-1);

                t.clear();
            }

            if(s[i]==':')
            {
                continue;
            }

            else if(s[i]=='.')
            {
                t=ss.top();mp[t]--;//cout<<mp[t]<<" "<<endl;
                ss.pop();t.clear();
            }
        }

        else
        {
            t.push_back(s[i]);
        }
    }

    cout<<count;

    return 0;
}
