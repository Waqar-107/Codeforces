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
#include<time.h>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 200
#define inf 10000000000
#define pp pair<char,int>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;
    ll A,B,t=0;
    ll x,y,z;

    cin>>A>>B;
    cin>>x>>y>>z;

    if(A<(2*x+y))
        t+=((2*x+y)-A);

    if(B<(y+3*z))
        t+=((3*z+y)-B);

    cout<<t;

    return 0;
}
