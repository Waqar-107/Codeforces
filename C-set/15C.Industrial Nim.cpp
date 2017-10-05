/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");

using namespace std;

ll XOR(ll m, ll n)
{
    ll a[4];

    if(m%2)
    {
        a[0]=m, a[1]=m^n, a[2]=m-1, a[3]=(m-1)^n;
    }

    else
    {
        a[0]=n,a[1]=1,a[2]=n^1,a[3]=0;
    }

    return a[(n-m)%4];
}

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,m,x;

    scanf("%I64d",&n);

    k=0;
    for(i=0;i<n;i++)
    {
        scanf("%I64d%I64d",&x,&m);

        j=x+m-1;
        k=k^XOR(x,j);
    }

    if(k)
        printf("tolik");

    else
        printf("bolik");

    return 0;
}

/*
* nim game theory: if there are n heaps of stones and there are some number of stones in the heaps,
* if the xor of the numbers are 0, the one who moves first loses, else the one who moves first wins
*
* efficiently calculate xor-https://stackoverflow.com/questions/10670379/find-xor-of-all-numbers-in-a-given-range
*/
