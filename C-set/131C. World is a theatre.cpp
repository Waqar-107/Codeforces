#include<iostream>
#include<cstdio>
using namespace std;

long long int dp[70][70];
long long int nCr(long long  int n,long long int r)
{
        if(r==1) return n;
        if(n==r) return 1;
        if(dp[n][r]!=-1) return dp[n][r];
        else
        {
            dp[n][r]=nCr(n-1,r)+nCr(n-1,r-1);
            return dp[n][r];
        }
}
int main()
{
        long long int n,m,t;
        long long int x,y,z;
        long long int sum=0;
        long long int i,j,k;

        for(i=0;i<70;i++)
        {
            for(j=0;j<70;j++)
            {
                dp[i][j]=-1;
            }
        }

        cin>>n>>m>>t;

        i=4;
        while(i<=n)
        {
                if((t-i)<=m && t-i>=1)
                {
                    x=nCr(n,i);
                    y=nCr(m,t-i);
                    sum=sum+(x*y);
                }
                i++;
        }

        cout<<sum;

        return 0;

}
/*
if((t-i)<=m)
    {
        x=fact(n)/(fact(i)*fact(n-i));
        y=fact(m)/(fact(m-t+i)*fact(t-i));
        sum=sum+(x*y);
    }
*/
