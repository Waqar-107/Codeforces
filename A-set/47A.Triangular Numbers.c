#include<stdio.h>
#include<math.h>
int main()
{
        float n,x,y;
        scanf("%f",&n);

        x=(-1+sqrt(1+(8*n)))/2;
        y=(-1-sqrt(1+(8*n)))/2;

        if(floorf(x)==x || floorf(y)==y)
            printf("YES");
        else
            printf("NO");

        return 0;
}
