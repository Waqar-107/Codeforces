/***from dust i have come, dust i will be***/

#include<stdio.h>

#define dbg printf("in\n");
#define nl printf("\n");
#define m 1000000007

typedef long long int ll;

int main()
{
    ll i,j,k;
    ll a,b,cnt,z;
    ll x,y;

    scanf("%I64d%I64d",&a,&b);

    cnt=0;
    for(i=1;i<=a;i++)
    {
        x=(b*i+1)%m;
        y=b*(b-1);
        y/=2;
        y=y%m;
        z=x*y;

        cnt=((cnt%m)+(z%m))%m;
    }

    printf("%I64d",cnt%m);

    return 0;
}
