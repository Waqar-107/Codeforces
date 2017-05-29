#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
        int t[5];
        int i,j,k;
        int count=1,sum=0,sub=0,sum2;

        for(i=0;i<5;i++)
            {
                cin>>t[i];
                sum=sum+t[i];
            }

        sort(t,t+5);

        for(i=4;i>=0;)
        {
                sum2=t[i];
                count=1;
                for(j=i-1;j>=0;j--)
                {
                        if(t[i]==t[j] && count<3)
                        {
                            count++;
                            sum2=sum2+t[j];
                        }
                        else
                            break;
                }

                if(count==2)
                {
                    i-=2;
                    if(sum2>sub)
                    {
                        sub=sum2;
                    }
                }

                else if(count==3)
                {
                    i-=3;
                    if(sum2>sub)
                    {
                        sub=sum2;
                    }
                }

                else
                    i--;

                //cout<<sum2<<" "<<sub<<"\n";
        }

        cout<<sum-sub;

        return 0;
}
