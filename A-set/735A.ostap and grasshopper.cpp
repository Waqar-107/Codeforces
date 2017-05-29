#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,j,k,n;
    int g,t;
    bool flag=false;

    cin>>n>>k;
    cin>>s;

    for(i=0;i<s.length();i++)
    {
        if(s[i]=='G')
            g=i;
        else if(s[i]=='T')
            t=i;
    }

    if(t>g)
    {
        for(i=g;i<s.length();i+=k)
        {
            if(s[i]=='#')
                break;
            else if(s[i]=='T')
                flag=true;
        }
    }

    else
    {
        for(i=g;i>=0;i-=k)
        {
            if(s[i]=='#')
                break;
            else if(s[i]=='T')
                flag=true;
        }
    }

    if(flag==true)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
