#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
        ll i,j,k;
        ll t,e1,e2,s1,s2;
        ll count=0;
        string s;

        cin>>t>>s1>>s2>>e1>>e2>>s;

        ll x=e1-s1;
        ll y=e2-s2;

        char cx,cy;

        if(x>0)
            cx='E';
        else
            cx='W';

        if(y>0)
            cy='N';
        else
            cy='S';

        x=abs(x);y=abs(y);
        for(i=0;i<s.length();i++)
        {
            if(s[i]==cx)
                x--;
            else if(s[i]==cy)
                y--;

            count++;

            if(x<=0 && y<=0)
                break;
        }

        if(x<=0 && y<=0 && count<=t)
            cout<<count;
        else
            cout<<"-1";

        return 0;
}
