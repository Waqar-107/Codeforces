/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 150

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

    sf(n);

    int a[n]; ll sum=0; m=0;
    vector<int> uno, dos;

    for(i=0;i<n;i++)
        sf(a[i]), sum+=a[i];

    sort(a,a+n,greater<int>());

    if(a[n-1])
    {
        pf(-1);
        return 0;
    }

    if(sum%3==0)
    {
        if(!a[0]){
            pf(0);
            return 0;
        }

        for(i=0;i<n;i++)
            pf(a[i]);
    }

    else if(sum%3==1)
    {
        //either delete a digit where d%3==1
        //if not possible then, delete 2 digits where d%3==2

        k=0;
        for(i=n-1;i>=0;i--)
        {
            if(a[i]%3==2)
                dos.pb(i);

            else if(a[i]%3==1){
                a[i]=-1; k=1;
                break;
            }
        }

        if(!k)
        {
            if(dos.size()<2){
                pf(-1);
                return 0;
            }

            a[dos[0]]=-1;
            a[dos[1]]=-1;
        }

        for(i=0;i<n;i++)
        {
            if(a[i]>=0)
                uno.pb(a[i]);
        }

        if(uno[0]==0)
            pf(0);

        else{
            for(i=0;i<uno.size();i++)
                pf(uno[i]);
        }
    }

    else
    {
        //either delete a digit where d%3==2
        //if not possible then, delete 2 digits where d%3==1
         k=0;
        for(i=n-1;i>=0;i--)
        {
            if(a[i]%3==1)
                uno.pb(i);

            else if(a[i]%3==2){
                a[i]=-1; k=1;
                break;
            }
        }

        if(!k)
        {
            if(uno.size()<2){
                pf(-1);
                return 0;
            }

            a[uno[0]]=-1;
            a[uno[1]]=-1;
        }

        for(i=0;i<n;i++)
        {
            if(a[i]>=0)
                dos.pb(a[i]);
        }

        if(dos[0]==0)
            pf(0);

        else{
            for(i=0;i<dos.size();i++)
                pf(dos[i]);
        }
    }

    return 0;
}
