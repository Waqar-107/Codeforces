#include<bits/stdc++.h>
using namespace std;
int main()
{
        int i,j,k;
        float n,hs,hu;
        float m[5],w[5];
        float t=0;
        float x=500;

        for(i=0;i<5;i++)
        {
            cin>>m[i];
        }

        for(i=0;i<5;i++)
        {
            cin>>w[i];
        }

        cin>>hs>>hu;

        for(i=0;i<5;i++)
        {
            float a=0.3*x;
            float b=((1-m[i]/250)*x)- (50*w[i]) ;

            t=t+max(a,b);
            x+=500;
        }

        t=t+(hs*100)-(hu*50);

        cout<<t<<endl;

        return 0;
}
