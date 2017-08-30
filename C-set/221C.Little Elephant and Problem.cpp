/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,int>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k;
    int n;

    scanf("%d",&n);

    ll a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&a[i]);
        b[i]=a[i];
    }

    sort(b,b+n);

    k=0;
    for(i=0;i<n;i++)
    {
        if(a[i]!=b[i])
            k++;
    }

    k--;

    if(k<=1)
        printf("YES");

    else
        printf("NO");

    return 0;
}
