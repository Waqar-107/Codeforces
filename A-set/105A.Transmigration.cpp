/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 150

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d\n",n)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;
    double p,x;
    string s;

    cin>>n>>m>>p;
    map<string,int> mp;
    set<string> ss;

    for(i=0;i<n;i++)
    {
        cin>>s>>x;
        mp[s]=int(x*p+1e-6);

        if(mp[s]>=100)
            ss.insert(s);
    }

    for(i=0;i<m;i++)
    {
        cin>>s;
        if(ss.find(s)==ss.end())
            ss.insert(s), mp[s]=0;
    }

    cout<<ss.size()<<endl;
    auto itr=ss.begin();
    while(itr!=ss.end())
    {
       cout<<*itr<<" "<<mp[*itr]<<endl;
       itr++;
    }

    return 0;
}
