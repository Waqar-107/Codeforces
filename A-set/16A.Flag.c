#include<stdio.h>
#include<string.h>
int main()
{
    int n,m;
    int i,j;
    int flag=1;

    scanf("%d%d",&n,&m);

    char a[n][m];

    for(i=0;i<n;i++)
    {
        scanf("%s",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<m-1; j++)
        {
            if(a[i][j]!=a[i][j+1])
            {
                flag=0;
                break;
            }
        }

         if(flag==0)
        {
            break;
        }

         if(a[i][0]==a[i+1][0])
        {
            flag=0;
            break;
        }
    }

    if(flag==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
