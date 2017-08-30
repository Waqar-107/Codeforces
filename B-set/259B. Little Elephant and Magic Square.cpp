/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<string,int>
#define N 250000

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k;
    int n,x,y,z;
    int a,b,c;

    n=3;
    int s[n][n];

    k=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cin>>s[i][j],k+=s[i][j];
    }

    k/=2;

    x=s[1][0]+s[1][2]-s[0][1]-s[0][2];
    y=s[2][0]+s[2][1]-s[1][0]-s[1][2];

    c=(k-x-2*y)/3;
    b=y+c;
    a=x+b;

    s[0][0]=a;s[1][1]=b;s[2][2]=c;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cout<<s[i][j]<<" ";

        cout<<endl;
    }

    return 0;
}
