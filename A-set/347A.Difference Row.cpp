/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,ll>
#define inf 1000000000

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k;
    int n;

    cin>>n;

    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);
    swap(a[0],a[n-1]);

    for(i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}
