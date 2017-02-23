#include<cstdio>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdlib>

using namespace std;
int main()
{
        int i,j,k;
        int n;
        int *a,*b;
        int acount=1,bcount=1;
        int ata=0,bt=0;

        cin>>n;
        int c[n];
        for(i=0;i<n;i++)
            cin>>c[i];

        if(n==1)
        {
            cout<<"1 0";
            return 0;
        }

        a=&c[0];
        b=&c[n-1];

        ata=c[0];
        bt=c[n-1];

        c[0]=-1;
        c[n-1]=-1;

        for(i=1;;i++)
        {
                if(ata>bt)
                {
                    *b--;
                    if(*b!=-1)
                    {
                        bt=bt+*b;
                        bcount++;
                        *b=-1;
                        //cout<<bt<<"  bt"<<endl;
                    }
                }
                else
                {
                    *a++;
                    if(*a!=-1)
                    {
                        ata+=*a;
                        *a=-1;
                        acount++;
                        //cout<<ata<<"  ata"<<endl;
                    }
                }

                  if(a==b)
                    {
                        break;
                    }
        }

        cout<<acount<<" "<<bcount;

        return 0;
}
