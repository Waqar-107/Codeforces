/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,int>
#define N 1001

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k;
    int n,x;
    int cnt=0,mex=0;

    scanf("%d%d",&n,&x);

    int a[n];bool f=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];

        if(a[i]==x)
            f=1;
    }

    sort(a,a+n);
    //if x is present then erase is required
    if(f)
        cnt++;

    k=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<x)
            k++;
        else
            break;
    }

    j=x;
    cnt+=(j-k);
    printf("%d",cnt);

    return 0;
}
