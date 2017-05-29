#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
        ll i,j,k;
        ll n,x=8,y=8;
        cin>>n;

        if(n==0)
        {
            cout<<"1";
            return 0;
        }

        if(n%4==0)
            cout<<"6"<<endl;
        else if(n%4==1)
            cout<<"8"<<endl;
        else if(n%4==2)
            cout<<"4"<<endl;
        else if(n%4==3)
            cout<<"2"<<endl;

        return 0;
}
