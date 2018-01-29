/***from dust i have come, dust i will be***/

#include<stdio.h>

#define dbg printf("in\n");
#define nl printf("\n");
#define N 100010
#define max(a,b) a>b?a:b

int a[N];

int main()
{
    int i,j,k;
    int n,x,mx;

    scanf("%d",&n);

    memset(a,0,sizeof(a));
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        a[x]++;
    }

    for(i=0;i<N;i++)
    {
        if(a[i]%2)
        {
            printf("Conan\n");
            return 0;
        }
    }

    printf("Agasa\n");

    return 0;
}
