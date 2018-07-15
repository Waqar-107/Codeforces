/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 150
#define inf 1000000000
#define pp pair<int,int>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;

    string s,t;
    cin>>s>>t;

    n=min(s.length(),t.length());
    int cnt=0;

    j=s.length()-1;
    k=t.length()-1;

    while(n--)
    {
        if(s[j]==t[k])
            cnt++, k--, j--;
        else
            break;
    }

    int ans=(s.length()-cnt)+(t.length()-cnt);
    cout<<ans;

    return 0;
}
