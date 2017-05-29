#include<bits/stdc++.h>
using namespace std;
int main()
{
        int a,b,c;
        int x,y,z;
        int beshi=0,kom=0;

        cin>>a>>b>>c;
        cin>>x>>y>>z;

        //nil
        if(a>x)
            beshi=beshi+(a-x)/2;
        else
            kom=kom+x-a;

        //beguni
         if(b>y)
            beshi=beshi+(b-y)/2;
        else
            kom=kom+y-b;

        //komola
         if(c>z)
            beshi=beshi+(c-z)/2;
        else
            kom=kom+z-c;

        if(beshi>=kom)
            cout<<"YES";
        else
            cout<<"NO";

        return 0;

}
