/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 200100
#define inf 100000000
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

int main()
{
    //freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m,r;

    sf(n);

    n*=2;
    int a[n];

    for(i=0;i<n;i++)
        sf(a[i]);

    int cnt=0;
    for(i=0;i<n;i+=2)
    {
        if(a[i]==a[i+1])
            continue;

        //find next
        for(j=i+1;j<n;j++)
        {
            if(a[j]==a[i])
                break;
        }

        //swap with jth
        cnt+=((j+1)-(i+2));//cout<<j+1<<" "<<i+2<<endl;
        m=a[j];

        for(k=j;k>=i+2;k--)
            a[k]=a[k-1];

        a[i+1]=m;
    }

    pf(cnt);

    return 0;
}
