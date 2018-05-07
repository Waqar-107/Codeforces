/***from dust i have come, dust i will be***/

#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<functional>
#include<iomanip>
#include<iostream>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<stack>
#include<string>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 400
#define pp pair<int,int>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d\n",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s\n",s)

#define pb push_back

using namespace std;

int main()
{
	//freopen("in.txt", "r", stdin);

	int i,j,k;
	int n,m,r;

    sff(n,k);

    ll a[n];
    for(i=0;i<n;i++)
        sfl(a[i]);

     sort(a,a+n);

     if(k==0)
     {
         if(a[0]==1)
            cout<<-1;
         else
            cout<<1;

         return 0;
     }

     if(n==1)
     {
         pfl(a[0]);
         return 0;
     }

     if(n==k)
     {
         pfl(a[k-1]);
         return 0;
     }


    k--;
    if(k+1<n && a[k]!=a[k+1])
        pfl(a[k]);
    else
        pf(-1);

	return 0;
}
