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
#define N 1010
#define inf 10000000
#define pp pair<int,int>

using namespace std;

int a[N];
int main()
{
    //freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;
    int l,r;

    cin>>n>>m;

    k=0;
    memset(a,0,sizeof(a));
    for(i=0;i<n;i++)
    {
        cin>>l>>r;
        if(l>r)
            swap(l,r);

        a[l]++;
        a[r+1]--;

        k=max(k,r);
    }

    j=inf;
    for(i=1;i<=k;i++)
    {
        a[i]+=a[i-1];

        if(a[i]==n)
        {
            j=min(j,abs(m-i));
        }
    }

    if(j==inf)
        cout<<"-1";
    else
        cout<<j;

    return 0;
}
