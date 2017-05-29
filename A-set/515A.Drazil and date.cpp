#include<bits/stdc++.h>
typedef long long int li;
using namespace std;
int main()
{
        li i,j,k;
        li a,b,s,rs;

        cin>>a>>b>>s;

        rs=abs(a)+abs(b);

        if(rs==s || (s>rs && (s-rs)%2==0))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

        return 0;
}
