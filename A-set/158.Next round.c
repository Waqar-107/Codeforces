#include<stdio.h>
int main()
{
    int i,j,n,k,c=0,c2=0;

    scanf("%d%d",&n,&k);

    int a[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }


    if(a[k-1]!=0)
    {
        for(i=0;i<n;i++)
      {
         if(a[i]>=a[k-1])
             c++;
      }
      printf("%d",c);
    }

    else
        {
            for(i=0;i<n;i++)
            {
                if(a[i]!=0 && a[k-1]==0)
                    c2++;
            }

            printf("%d",c2);
        }

    return 0;

}
