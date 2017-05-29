#include<stdio.h>
#include<math.h>
int main()
{
        int i,j,k;
        int n,diff=2000;
        int index1,index2;

        scanf("%d",&n);

        int h[n];

        for(i=0;i<n;i++)
        {
            scanf("%d",&h[i]);
        }

        for(i=0;i<n-1;i++)
        {
                if(abs(h[i+1]-h[i])<diff)
                {
                    diff=abs(h[i+1]-h[i]);
                    index1=i;
                    index2=i+1;
                }
        }

        if(abs(h[0]-h[n-1])<diff)
                {
                    diff=abs(h[0]-h[n-1]);
                    index1=0;
                    index2=n-1;
                }


        printf("%d %d",index1+1,index2+1);

        return 0;
}
