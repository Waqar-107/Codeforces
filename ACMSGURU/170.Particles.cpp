/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 100100

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;

    string s,t;

    cin>>s>>t;

    int cnt = 0;
    n=s.length();

    for(i=0; i<n; i++)
    {
        if(s[i] == t[i])
            continue;

        k=-1;
        for(j=i+1; j<n; j++)
        {
            if(s[j]==t[i])
            {
                k=j;
                break;
            }
        }

        if(k == -1){pfs("-1\n");return 0;}

        for(j=k;j>i;j--)
            swap(s[j],s[j-1]), cnt++;
    }

    pf(cnt);

    return 0;
}
