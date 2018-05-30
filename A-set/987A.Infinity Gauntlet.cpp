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
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 50700

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;

    string s;
    map<string,string> mp;

    mp["purple"]="Power";
    mp["green"]="Time";
    mp["blue"]="Space";
    mp["orange"]="Soul";
    mp["red"]="Reality";
    mp["yellow"]="Mind";

    cin>>n;

    m=6-n;
    cout<<m<<endl;

    for(i=0;i<n;i++)
    {
        cin>>s;
        mp[s]="khan";
    }

    auto itr=mp.begin();
    while(itr!=mp.end())
    {
        if(itr->second!="khan")
            cout<<itr->second<<endl;

        itr++;
    }
    return 0;
}
