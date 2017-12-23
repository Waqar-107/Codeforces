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
#include<string>
#include<time.h>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 200
#define inf 1000000000
#define pp pair<char,int>

using namespace std;

bool cmp(pp a,pp b)
{
    return a.second>b.second;
}

int main()
{
    //freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m,t;
    string s;

    map<char,int> mp;
    map<char,bool> ch;
    map<char,int> cnt;

    for(i='a';i<='j';i++)
        mp[i]=-1;

    cin>>n;
    string a[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
        ch[a[i][0]]=1;
    }

    for(i=0;i<n;i++)
    {
        k=1;s=a[i];
        for(j=s.length()-1;j>=0;j--)
        {
            cnt[s[j]]+=k;
            k*=10;
        }
    }

    map<char,int>  :: iterator p=cnt.begin();

    vector<pp> v;
    while(p!=cnt.end())
    {
        v.push_back({p->first,p->second});p++;
    }

    sort(v.begin(),v.end(),cmp);

    j=1,t=0;
    for(i=0;i<v.size();i++)
    {
        if(ch[v[i].first])
        {
            if(mp[v[i].first]==-1)
                mp[v[i].first]=j,j++;
        }

        else
        {
            if(mp[v[i].first]==-1)
            {
                if(!t)
                    mp[v[i].first]=0,t++;
                else
                    mp[v[i].first]=j,j++;
            }
        }
    }

    int sum=0;
    p=cnt.begin();
    while(p!=cnt.end())
    {
        sum+=(p->second*mp[p->first]);
        p++;
    }

    cout<<sum<<endl;

    return 0;
}
