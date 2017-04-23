/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in");
#define pi 3.1416

#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int a[1001][1001];
int r[1001],c[1001];

int main()
{
    freopen("in.txt","r",stdin);
    int i,j,k;
    int n,m,q;
    int x,y;

    scanf("%d%d%d",&n,&m,&q);

    for(i=1;i<=n;i++)
        r[i]=i;

    for(i=1;i<=m;i++)
        c[i]=i;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
           scanf("%d",&a[i][j]);
        }
    }

    char ch[2];
    for(i=1;i<=q;i++)
    {
        scanf("%s%d%d",&ch,&x,&y);

        if(ch[0]=='r')
            swap(r[x],r[y]);

        else if(ch[0]=='c')
            swap(c[x],c[y]);

        else
            printf("%d\n",a[r[x]][c[y]]);

    }

    return 0;
}
