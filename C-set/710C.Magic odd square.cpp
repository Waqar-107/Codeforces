#include<cstdio>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdlib>

using namespace std;
int main()
{
         int i,j,k;
         int n,c,p,ai,aj;

         cin>>n;
//n=5;
         int a[n][n];

         for(i=0;i<n;i++)
         {
             for(j=0;j<n;j++)
             {
                 a[i][j]=0;
             }
         }

         i=0;
         j=n/2;

         for(c=1;c<=(n*n);c++)
         {
                if(a[i][j]==0)
                {
                        a[i][j]=c;
                        ai=i;
                        aj=j;
                        i--;
                        j++;

                }
                else
                {
                    i=ai;
                    j=aj;
                    i++;
                    ai=i;
                    aj=j;
                    a[i][j]=c;
                    i--;
                    j++;

                }

                if(i==-1)
                {
                    i=n-1;
                }
                if(j==n)
                {
                    j=0;
                }
                if(j==-1)
                {
                    j=n-1;
                }
                if(i==n)
                {
                    i=0;
                }
         }


         for(i=0;i<n;i++)
         {
             for(j=0;j<n;j++)
             {
                 printf("%2d ",a[i][j]);
             }
             printf("\n");
         }

         return 0;
}
