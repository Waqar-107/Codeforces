/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,int>
#define N 50

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k;
    int n,m;
    string s;

    cin>>n>>k;
    cin>>s;

    map<char,int> mp;

    for(i=0;i<n;i++)
    {
        mp[s[i]]++;
    }

    for(i=0;i<n;i++)
    {
        if(mp[s[i]]>k)
        {
            cout<<"NO";
            return 0;
        }
    }

    cout<<"YES";


    return 0;
}
