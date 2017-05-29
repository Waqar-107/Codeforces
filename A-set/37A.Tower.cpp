#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
        int i,j,k;
        int n,max=0;
        int count=0,count2=0;

        cin>>n;

        int a[n];

        for(i=0;i<n;i++)
            cin>>a[i];

        sort(a,a+n);

        for(i=0;i<n;)
        {
                count=1;
                for(j=i+1;;j++)
                {
                    if(a[i]!=a[j])
                    {
                        count2++;
                        break;
                    }
                    else
                        count++;
                }
                if(max<count)
                {
                    max=count;
                }
                i=i+count;
        }

        printf("%d %d",max,count2);

        return 0;
}
