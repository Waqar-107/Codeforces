#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
        ll a,b,c,d;
        ll misha,vasya;

        cin>>a>>b>>c>>d;

        misha=max((3*a)/10,(a-((a*c)/250)));
        vasya=max((3*b)/10,(b-((b*d)/250)));

        if(misha>vasya)
            cout<<"Misha";
        else if(misha<vasya)
            cout<<"Vasya";
        else
            cout<<"Tie";


        return 0;
}
