#include<stdio.h>
int main()
{
        int i,j,k;
        int n,flag=0;

        scanf("%d",&n);
        int a[n];

        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

        for(i=0;i<n;i++)
        {
                for(j=0;j<n;j++)
                {
                        if(i!=j)
                        {
                                for(k=0;k<n;k++)
                                {
                                        if(k!=j && a[i]==a[j]+a[k])
                                        {
                                            printf("%d %d %d",i+1,j+1,k+1);
                                            flag=1;
                                            break;
                                        }
                                }
                                if(flag==1)
                                break;
                        }
                }
                if(flag==1)
                    break;
        }

        if(flag==0)
            printf("-1");

        return 0;
}
