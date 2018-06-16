/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 110
#define inf 100000000

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
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;
    int c[5];

    for(i=1;i<=4;i++)
        sf(c[i]);

    sff(n,m);

    int b[n], t[m];
    int bs=0, ts=0;

    for(i=0;i<n;i++)
        sf(b[i]), bs+=b[i];

    for(i=0;i<m;i++)
        sf(t[i]), ts+=t[i];

    int mn;
    if(!ts && !bs){pf(0);return 0;}

    //calculate in different scopes for bus and trolley
    //bus
    int cnt;
    int bn=inf;
    if(bs){
            //either take c1 for each, else cnt c2's
            //where cnt is the number of non-zero rides
            cnt=0;
            for(i=0;i<n;i++){
                if(b[i])
                     cnt+=min(c[1]*b[i],c[2]);
            }

            bn=cnt;
    }

    else
        bn=0;

    //trolley
    int tn=inf;
    if(ts){
        //either take c1 for each, else cnt c2's
            //where cnt is the number of non-zero rides
            cnt=0;
            for(i=0;i<m;i++){
                if(t[i])
                    cnt+=min(c[1]*t[i],c[2]);
            }

            tn=cnt;
    }

    else
        tn=0;

    //try to take c3s
    bn=min(bn,c[3]);
    tn=min(tn,c[3]);

    mn=tn+bn;
    pf(min(mn,c[4]));

    return 0;
}
