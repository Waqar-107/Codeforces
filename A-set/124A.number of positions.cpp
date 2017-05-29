#include<bits/stdc++.h>

typedef long long int ll;

#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
        int n,a,b;
        int  count;

        cin>>n>>a>>b;

        count=(n-a);

        if(n-a-b>1)
            count-=(n-a-b-1);

        cout<<count;

        return 0;
}
