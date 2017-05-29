#include<bits/stdc++.h>

typedef long long int ll;

#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
        int n1,n2,k1,k2;

        cin>>n1>>n2>>k1>>k2;

        if(n1>n2)
            cout<<"First";
        else
            cout<<"Second";

        return 0;

}

