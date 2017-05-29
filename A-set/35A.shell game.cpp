#include<cstdio>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdlib>

using namespace std;
int main()
{
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
        int idx;
        int a,b,i;

        scanf("%d",&idx);
        for(i=1;i<=3;i++)
        {
                scanf("%d%d",&a,&b);
                if(idx!=a && idx==b)
                    idx=a;
                else if(idx!=b && idx==a)
                    idx=b;
        }

        printf("%d",idx);

        return 0;
}
