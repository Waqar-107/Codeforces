#include<stdio.h>
#include<math.h>
int main()
{
        int m,n;
        int x,y;

        scanf("%d%d",&m,&n);

        x=((m/2)*n)+((m%2)*n/2);
        y=((n/2)*m)+((n%2)*(m/2));

        if(x>y)
            printf("%d",x);
        else
            printf("%d",y);

        return 0;
}
