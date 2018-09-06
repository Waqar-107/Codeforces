

/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 105
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

    sf(n);

    vector<int> a,b;

    for(i=0;i<n;i++)
        sf(m), a.pb(m);

    for(i=0;i<n;i++)
        sf(m), b.pb(m);

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    ll A=0,B=0;

    while(1)
    {
        //a's turn
        if(a.size()==0 && b.size()>0)
            b.pop_back();

        else if(b.size()==0 && a.size()>0)
            A+=a.back(), a.pop_back();

        else if(a.size()>0 && b.size()>0)
        {
            if(b.back()>=a.back())
                b.pop_back();
            else
                A+=a.back(), a.pop_back();
        }

        //a.size()==0 && b.size()==0
        else
            break;

        //-------------------------------------------------
        //b's turn
        if(a.size()==0 && b.size()>0)
            B+=b.back(), b.pop_back();

        else if(b.size()==0 && a.size()>0)
            a.pop_back();

        else if(a.size()>0 && b.size()>0){
            if(a.back()>=b.back())
                a.pop_back();
            else
                B+=b.back(), b.pop_back();
        }

        //a.size()==0 && b.size()==0
        else
            break;
    }

    pfl(A-B);

    return 0;
}
