/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in\n");
#define inf 1000000000000

using namespace std;

int main()
{
    int i,j,k;
    int n,m;
    string s;
    map<string,int> mp;

    cin>>n;
    m=0;

    while(n--)
    {
        cin>>s;
        mp[s]++;

        m=max(mp[s],m);
    }

    cout<<m;

    return 0;
}
