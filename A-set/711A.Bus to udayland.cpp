#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
        int i,j,k;
        int n;
        int flag=0;

        scanf("%d",&n);
        char a[n][6];

        for(i=0;i<n;i++)
        {
            scanf("%s",&a[i]);
        }

        for(i=0;i<n;i++)
        {
                for(j=0;j<n;j++)
                {
                        if(a[i][j]=='O' && a[i][j+1]=='O')
                        {
                            a[i][j]='+';
                            a[i][j+1]='+';
                            flag=1;
                            break;
                        }
                }

                if(flag==1)
                    {
                        break;
                    }
        }

        if(flag==0)
            cout<<"NO";
        else
        {
            cout<<"YES"<<endl;
            for(i=0;i<n;i++)
            {
                for(j=0;j<5;j++)
                {
                    printf("%c",a[i][j]);
                }
                printf("\n");
            }
        }

        return 0;
}
