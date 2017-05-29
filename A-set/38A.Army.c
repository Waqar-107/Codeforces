#include<stdio.h>
int main()
{
        int a,b,n;
        int i,j,count=0;

        scanf("%d",&n);

        int d[n-1];

        for(i=0;i<(n-1);i++)
        {
            scanf("%d",&d[i]);
        }

        scanf("%d%d",&a,&b);

        for(i=a-1;;i++)
        {
                count=count+d[i];
                a++;
                if(a==b)
                    break;
        }

        printf("%d",count);

        return 0;
}
