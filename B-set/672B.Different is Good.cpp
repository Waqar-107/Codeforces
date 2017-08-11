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

    int i,j,k;
    int n;
    string s;

    cin>>n>>s;

    set<char> ss;
    for(i=0;i<n;i++)
        ss.insert(s[i]);

    //possible to use k chars
    k=26-ss.size();

    //required changes
    j=n-ss.size();

    if(k<j)
        cout<<"-1";
    else
        cout<<j;

    return 0;
}
