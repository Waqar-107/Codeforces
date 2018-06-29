/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 100
#define inf 1000000000
#define pp pair<int,int>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back

using namespace std;

bool cmp(string s,string t)
{
    return s+t<t+s;
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;

    sf(n);

    string s[n];
    for(i=0;i<n;i++)
        cin>>s[i];

    sort(s,s+n,cmp);
    for(i=0;i<n;i++)
        cout<<s[i];

    return 0;
}
