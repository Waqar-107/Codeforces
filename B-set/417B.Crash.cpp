/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 100100

using namespace std;

int a[N];
int main()
{
    int i,j,k;
    int n,m,x;

    cin>>n;

    fill(a,a+N,-1);

    for(i=0;i<n;i++)
    {
        cin>>x>>k;

        if(a[k]<x-1)
        {
            cout<<"NO";
            return 0;
        }

        a[k]=max(a[k],x);
    }

    cout<<"YES";

    return 0;
}
