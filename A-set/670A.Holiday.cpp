#include<bits/stdc++.h>

typedef long long int ll;

#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
        ll n;

        cin>>n;

        if(n%7==0)
            cout<<(n/7)*2<<" "<<(n/7)*2<<endl;

        else
        {
            if(n%7>=6)
                cout<<(2*(n/7))+1<<" "<<(2*(n/7))+2;

            else if(n%7<=5 && n%7>=2)
                cout<<(n/7)*2<<" "<<(2*(n/7))+2;

            else if(n%7<2)
                cout<<(n/7)*2<<" "<<(2*(n/7))+1;
        }

        return 0;

}

