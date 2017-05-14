#include<stdio.h>
int main()
{
        int n,o=0,e=0,i,e2,o2;

        scanf("%d",&n);
        int a[n];

        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]%2==0)
            {
                e++;
                e2=i+1;
            }
            else
                {
                    o++;
                    o2=i+1;
                }
        }

        if(o==1)
            printf("%d",o2);
        else
            printf("%d",e2);

        return 0;
}
