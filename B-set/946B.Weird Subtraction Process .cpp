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

#define dbg printf("in\n");
#define nl printf("\n");
#define N 100010
#define inf 10000000000
#define pp pair<int,int>

using namespace std;


int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k;
    ll n,m;
    ll x,y;

    cin>>n>>m;

    while(1)
    {
        if(n==0 || m==0)
            break;

        if(n<2*m && m<2*n)
            break;

        if(n>=2*m)
        {
            x=n/(2*m);
            n-=(x*2*m);
        }

        else
        {
             x=m/(2*n);
             m-=(x*2*n);
        }
    }

    cout<<n<<" "<<m;

    return 0;
}
