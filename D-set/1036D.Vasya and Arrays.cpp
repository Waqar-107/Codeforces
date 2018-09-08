/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 120
#define inf 10000000000000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d\n",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d\n",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

int main()
{
    freopen("in.txt","r",stdin);

    int i,j,k;
    int n,m;

    sf(n);

    int a[n];
    for(i=0;i<n;i++) sf(a[i]);

    sf(m);

    int b[m];
    for(i=0;i<m;i++) sf(b[i]);

    ll curA=0, curB=0;
    int len=0;

    i=j=0;
    //get to the first index where the elements are different in the two arrays
    while(i<n && j<m)
    {
        if(a[i]==b[j])
            i++,j++,len++;
        else
            break;
    }

    if(i==n || j==m)
    {
        if(n==m)
            pf(n);
        else
            pf(-1);

        return 0;
    }

    //i and j now indicates to the first unmatched
    while(1)
    {
        //cout<<curA<<" "<<curB;nl
        if(curA==curB && curA==0)
            curA+=a[i], curB+=b[j];

        else if(curA==curB && curA>0)
            i++, j++, len++, curA=curB=0;

        else
        {
            if(curA>curB){
                j++;
                curB+=b[j];
            }

            else{
                i++;
                curA+=a[i];
            }
        }

        if(i==n || j==m)
        {
            if(i==n && j==m)
                break;
            else{
                pf(-1); return 0;
            }
        }
    }

    pf(len);

    return 0;
}
