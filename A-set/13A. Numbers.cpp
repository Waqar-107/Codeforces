#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;

int gcd(int a,int b)
{
        int g,t;
        while(true)
        {
                if(b%a==0)
                {
                    g=a;
                    break;
                }
                else
                {
                    t=a;
                    a=b%a;
                    b=t;
                }
        }

        return g;
}

int main()
{
        int i,j,k;
        int n,count=0,bn;
        int sum=0;

        cin>>n;

        int a[n-2];
        k=0;
        for(i=2;i<=(n-1);i++)
        {
                bn=n;
                count=0;
                for(j=1;;j++)
                {
                        if(bn/i!=0)
                        {
                            count+=(bn%i);
                            bn=bn/i;
                        }

                        else
                        {
                            count+=(bn%i);
                            break;
                        }
                }
                a[k]=count;
                k++;
                //cout<<count<<" "<<i<<endl;
        }

        for(i=0;i<=(n-3);i++)
            {
                sum+=a[i];
            }

        int x=gcd(sum,n-2);
        cout<<sum/x<<"/"<<(n-2)/x<<endl;

        return 0;
}
