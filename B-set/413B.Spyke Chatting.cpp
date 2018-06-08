/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 20100
#define pp pair<int,int>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;
    int x,y;

    scanf("%d%d%d",&n,&m,&k);

    int a[n][m];
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);

    int cnt[m]; int nt[n];
    memset(cnt,0,sizeof(cnt));
    memset(nt,0,sizeof(nt));

    for(i=0;i<k;i++)
    {
        scanf("%d%d",&x,&y);

        x--;y--;
        cnt[y]++;

        //if x is in yth chat
        if(a[x][y])
            nt[x]--;
    }

    //those who are in mth chat, increment
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j][i]){
                nt[j]+=cnt[i];
            }
        }
    }

    for(i=0;i<n;i++)
        printf("%d ",nt[i]);

    return 0;
}
