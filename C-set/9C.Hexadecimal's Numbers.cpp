/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in\n");
#define NL printf("\n");

#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

string s,str;
ll sum=0;

void ss(string t,ll idx)
{
    if(idx==s.length()-1)
    {
        t[idx]='0';//cout<<t<<endl;
        if(t<=s)
            sum++;

        t[idx]='1';//cout<<t<<endl;
        if(t<=s)
            sum++;

        return;
    }

    string temp=t,temp2=t;
    temp[idx]='0';temp2[idx]='1';

    ss(temp,idx+1);
    ss(temp2,idx+1);

}

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll x,n;

    cin>>s;

    if(s.length()==1)
    {
        cout<<"1";
        return 0;
    }

    i=1;x=1;
    while(i<s.length())
    {
        sum+=x;
        x*=2;i++;
    }

    for(i=0;i<s.length();i++)
        str.push_back('X');

    str[0]='1';
    ss(str,1);

    cout<<sum;

    return 0;
}
