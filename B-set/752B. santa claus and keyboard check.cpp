#define _CRT_SECURE_NO_WARNINGS

/***from dust i have come, dust i will be***/

#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<functional>
#include<iomanip>
#include<iostream>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<stack>
#include<sstream>
#include<string>
#include<time.h>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 100
#define inf 100000
#define pp pair<char,char>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n,m,x;
    string s,t;

    cin>>s>>t;

    vector<pp> v;
    char mp[26];
    bool vis[26];

    memset(vis,0,sizeof(vis));

    n=s.length();
    for(i=0;i<n;i++)
    {
        if(s[i]==t[i])
        {
            if(vis[s[i]-'a'] && mp[s[i]-'a']==s[i])
                continue;

            else if(!vis[s[i]-'a'])
                mp[s[i]-'a']=s[i],vis[s[i]-'a']=1;

            else if(vis[s[i]-'a'] && mp[s[i]-'a']!=s[i])
            {
                cout<<"-1";
                return 0;
            }
        }

        else
        {
            if(vis[s[i]-'a'] && vis[t[i]-'a'])
            {
                if(mp[s[i]-'a']==t[i] && mp[t[i]-'a']==s[i])
                    continue;

                else
                {
                    cout<<"-1";
                    return 0;
                }
            }

            else if(!vis[s[i]-'a'] && !vis[t[i]-'a'])
            {
                mp[s[i]-'a']=t[i];vis[s[i]-'a']=1;
                mp[t[i]-'a']=s[i];vis[t[i]-'a']=1;

                v.push_back({s[i],t[i]});
            }

            else
            {
                cout<<"-1";
                return 0;
            }
        }
    }

    cout<<v.size()<<endl;
    for(i=0;i<v.size();i++)
        cout<<v[i].first<<" "<<v[i].second<<endl;

    return 0;
}
