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
#define inf 1000000000
#define pp pair<char,int>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m,sum;

    cin>>n;

    sum=0;
    int a[n],f[n];

    for(i=0;i<n;i++)
        cin>>a[i],sum+=a[i];

    sort(a,a+n);

    int q=sum/n;
    int r=sum%n;

    for(i=0;i<n;i++)
        f[i]=q;

    i=n-1;
    while(r--)
    {
        f[i]++;
        i--;
    }

    sum=0;
    for(i=0;i<n;i++)
        sum+=abs(f[i]-a[i]);

    cout<<sum/2;

    return 0;
}
