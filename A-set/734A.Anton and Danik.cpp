#include<bits/stdc++.h>

typedef long long int ll;

#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
        ll i,j,k;
        ll n,m;
        ll a=0,b=0;
        string s;

        cin>>n>>s;

        for(i=0;i<n;i++)
        {
            if(s[i]=='A')
                a++;
            else if(s[i]=='D')
                b++;
        }

        if(a>b)
            cout<<"Anton"<<endl;
        else if(a<b)
            cout<<"Danik"<<endl;
        else
            cout<<"Friendship"<<endl;

        return 0;
}
