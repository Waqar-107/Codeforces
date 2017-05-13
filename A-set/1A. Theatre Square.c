#include<stdio.h>
int main()
{
        long long int m,n,a,r1,r2;

        scanf("%I64d%I64d%I64d",&n,&m,&a);

        if(m%a==0)
        {
            r1=m/a;
        }
        else
        {
            r1=(m/a)+1;
        }

        if(n%a==0)
        {
            r2=n/a;
        }
        else
        {
            r2=(n/a)+1;
        }

        printf("%I64d",r1*r2);
        return 0;
}
