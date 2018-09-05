/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 55
#define inf 10000000000000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d\n",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k;
    int n,m;
    int a,b;

    sf(n); sff(a,b);

    int ar[n];
    for(i=0;i<n;i++)
        sf(ar[i]);

    int cnt=0;
    i=0, j=n-1;
    while(i<j)
    {
        if(ar[i]==2 || ar[j]==2)
        {
            if(ar[i]==2 && ar[j]==2)
                cnt+=min(a,b)*2;

            else if(ar[i]==2)
            {
                if(ar[j]==0)
                    cnt+=a;
                else
                    cnt+=b;
            }

            else
            {
                if(ar[i]==0)
                    cnt+=a;
                else
                    cnt+=b;
            }
        }

        else
        {
            if(ar[i]!=ar[j]){
                pf(-1);
                return 0;
            }
        }

        i++;j--;
    }

    if(n%2)
    {
        n=n/2;
        if(ar[n]==2)
            cnt+=min(a,b);
    }

    pf(cnt);

    return 0;
}
