/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 150

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;

    cin>>n>>k;

    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n,greater<int>());

    int cnt=0;
    for(i=0;i<n;i+=k)
        cnt+=(a[i]-1)*2;

    cout<<cnt;

    return 0;
}
