#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,int>
#define inf 1000000000000000

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,m,x;
    ll a,b,d,c;

    scanf("%I64d%I64d",&a,&b);

    c=a+1;

    //last digit of b
    x=b%10;

    m=x;
    k=1;

    for(i=b; i>=c; i--)
    {
        k*=x;
        x--;

        if(x==0 && i>c)
        {
            printf("0");
            return 0;
        }

        if(x<0)
            x=9;
    }

    k=k%10;
    printf("%I64d",k);

    return 0;
}
