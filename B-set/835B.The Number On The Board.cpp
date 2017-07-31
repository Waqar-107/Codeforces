/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>
typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define inf 1000000000
#define pp pair<int,int>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,sum,count;
    string s;

    cin>>n>>s;

    sum=0;
    for(i=0;i<s.length();i++)
        sum+=(s[i]-48);

    sort(s.begin(),s.end(),greater<char>());

    count=0;
    i=s.length()-1;
    while(n>sum)
    {
        if(s[i]=='9')
            i--;

        else
        {
            k=9-s[i]+48;
            sum+=k;count++;
            i--;
        }
    }

    cout<<count;

    return 0;
}
