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
#define N 400
#define pp pair<int,int>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d\n",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s\n",s)

#define pb push_back

using namespace std;

int main()
{
	//freopen("in.txt", "r", stdin);

	int i,j,k;
	int n,m;
    string s,t="##";
    map<string,int> mp;

    cin>>n>>s;
    for(i=0;i<n-1;i++)
    {
        t[0]=s[i];
        t[1]=s[i+1];

        mp[t]++;
    }

    int mx=0;
    map<string,int> :: iterator itr=mp.begin();
    while(itr!=mp.end())
    {
        if(itr->second>=mx)
            mx=itr->second,t=itr->first;
        itr++;
    }

    cout<<t;

	return 0;
}
