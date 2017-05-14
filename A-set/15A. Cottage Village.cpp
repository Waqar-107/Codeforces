#include<bits/stdc++.h>
using namespace std;
int main()
{
        int i,j,k,count=2;
        int n,t;
        float x,y;
        map<float,float> p;

        cin>>n>>t;
        float a[n];

        for(i=0;i<n;i++)
        {
            cin>>x>>y;
            p[x]=y;
            a[i]=x;
        }

        sort(a,a+n);

        for(i=1;i<n;i++)
        {
            x=a[i]-a[i-1]- (p[a[i]]/2) - (p[a[i-1]]/2);

            if(x==t)
                count++;
            else if(x>t)
                count+=2;
        }

        cout<<count<<endl;

        return 0;
}
