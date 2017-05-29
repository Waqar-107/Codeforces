#include<bits/stdc++.h>
using namespace std;
int main()
{
        int x,y;
        int x1,y1,x2,y2;

        cin>>x1>>y1>>x2>>y2;

        x=abs(x1-x2);
        y=abs(y1-y2);

        if(x==y)
            cout<<x;

        else
        {
            cout<<max(x,y);
        }

        return 0;
}
