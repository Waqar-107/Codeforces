#include<stdio.h>
struct force
{
    int x;
    int y;
    int z;
};

int main()
{
        int i,n;
        int s1=0,s2=0,s3=0;

        scanf("%d",&n);

        struct force a[n];

        for(i=0;i<n;i++)
        {
            scanf("%d%d%d",&a[i].x,&a[i].y,&a[i].z);
        }

        for(i=0;i<n;i++)
        {
            s1=s1+a[i].x;
            s2=s2+a[i].y;
            s3=s3+a[i].z;
        }

        if(s1==0&&s2==0&&s3==0)
        {
            printf("YES");
        }

        else
        {
            printf("NO");
        }

        return 0;
}
