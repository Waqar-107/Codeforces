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
    int n,m;

    scanf("%d",&n);

    ll a[n][n];
    int r,c;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%I64d",&a[i][j]);

            if(!a[i][j])
                r=i,c=j;
        }
    }

    //take the 2nd row
    ll s1=0,s2=0;
    if(r==0)
    {
        for(i=0;i<n;i++)
            s1+=a[1][i];
    }

    else
    {
        for(i=0;i<n;i++)
            s1+=a[0][i];
    }

    for(i=0;i<n;i++)
        s2+=a[r][i];

    a[r][c]=s1-s2;
    if(a[r][c]<=0)
    {
        printf("-1");
        return 0;
    }

    //check
    //sum should be s1
    for(i=0;i<n;i++)
    {
        s2=0;
        for(j=0;j<n;j++)
            s2+=a[i][j];

        if(s2!=s1)
        {
            printf("-1");return 0;
        }
    }

    //check columns
    for(i=0;i<n;i++)
    {
        s2=0;
        for(j=0;j<n;j++)
            s2+=a[j][i];

        if(s2!=s1)
        {
            printf("-1");return 0;
        }
    }

    //check diagonals
    s2=0;
    for(i=0;i<n;i++)
        s2+=a[i][i];

    if(s2!=s1)
    {
        printf("-1");return 0;
    }

    s2=0;j=n-1;
    for(i=0;i<n;i++)
        s2+=a[i][j],j--;

    if(s2!=s1)
    {
        printf("-1");return 0;
    }

    printf("%I64d",a[r][c]);

    return 0;
}
