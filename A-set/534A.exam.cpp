#include<bits/stdc++.h>

typedef long long int ll;

#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
        int i,j,k;
        int n;

        cin>>n;

        if(n>=5 || n==1)
        {
            cout<<n<<endl;

            for(i=1;i<=n;i+=2)
                cout<<i<<" ";

            for(i=2;i<=n;i+=2)
                cout<<i<<" ";
        }

        else if(n==2)
            cout<<"1\n"<<"1";

        else if(n==3)
            cout<<"2\n"<<"1 3";

        else if(n==4)
            cout<<"4\n"<<"3 1 4 2";

        return 0;

}

