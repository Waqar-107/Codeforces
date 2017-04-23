#include<stdio.h>
#include<math.h>
int main()
{
        int n;
        int i,j,k,z,y;

        scanf("%d",&n);

        //upper part
        for(i=1;i<=(n+1);i++)
        {
                //space of the left part
                for(j=1;j<=(n+1-i);j++)
                {
                    printf("  ");
                }

                //digits of the left part
                for(k=0;k<i-1;k++)
                {
                    printf("%d ",k);
                }
                printf("%d",k);

                //right part
                for(k=0;k<(i-1);k++)
                {
                    printf(" %d",(i-2-k));
                }

                printf("\n");

        }

        z=n;
        y=n-1;
        //lower part of the pattern
        for(i=1;i<=n;i++)
        {
                //left part, space
                for(j=1;j<=i;j++)
                {
                    printf("  ");
                }

                //left part, digit print
                for(k=0;k<z-1;k++)
                {
                    printf("%d ",k);
                }
                printf("%d",k);
                z--;

                //right part of the pattern
                for(k=y-1;k>=1;k--)
                {
                    printf(" %d",k);
                }
                if(k>=0)
                {
                    printf(" %d",k);
                }

                y--;

                printf("\n");
        }

        return 0;
}
