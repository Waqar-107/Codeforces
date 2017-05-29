#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

int main()
{
        int n,m,a,b,p;
        float x;

        cin>>n>>m>>a>>b;

        x=(float)b/m;
        //cout<<x<<endl;
        if(a<x)
        {
                //cout<<n<<" "<<a<<" "<<x<<endl;
                cout<<n*a;
        }
        else
        {
                p=(n/m)*b;

                if((n%m)*a < b)
                {
                    p+=(n%m)*a;
                }

                else
                {
                    p+=b;
                }

                cout<<p;
        }

        return 0;
}
