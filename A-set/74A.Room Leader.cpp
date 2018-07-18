/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 30
#define inf 100000000
#define pp pair<int,int>

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
    int mx=-1*1e9;
    string s,name;

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s;
        k=0;

        cin>>m; k+=m*100;
        cin>>m; k-=m*50;

        for(j=0;j<5;j++)
            cin>>m, k+=m;

        if(mx<k)
            mx=k, name=s;

        //cout<<s<<" "<<k;nl
    }

    cout<<name;

    return 0;
}
