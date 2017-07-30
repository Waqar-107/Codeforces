/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>
typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,int>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,m;
    char ch1,ch2;

    cin>>ch1>>ch2;
    cin>>n;

    n=n%4;

    string s="v<^>";

    char cw,ccw;
    for(i=0;i<4;i++)
    {
        if(s[i]==ch1)
        {
            j=i;break;
        }
    }

    //cw
    i=j;k=n;
    while(k--)
    {
        i++;
        i=i%4;
    }

    cw=s[i];

    //ccw
    i=j;k=n;
    while(k--)
    {
        i--;

        if(i<0)
            i=3;
    }

    ccw=s[i];

    //cout<<cw<<" "<<ccw;nl

    if(cw==ccw)
        cout<<"undefined";
    else if(cw==ch2)
        cout<<"cw";
    else if(ccw==ch2)
        cout<<"ccw";
    else
        cout<<"undefined";

    return 0;
}
