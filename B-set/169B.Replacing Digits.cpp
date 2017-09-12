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
    int n,m,x;
    string a,s;

    cin>>a>>s;

    map<char,int> mp;

    char mn='0';
    for(i=0;i<s.length();i++)
    {
        mn=min(mn,s[i]);
        mp[s[i]]++;
    }

    mp[mn]--;

    for(i=0;i<a.length();i++)
    {
        for(j='9';j>a[i];j--)
        {
            if(mp[j]>0)
            {
                a[i]=j;mp[j]--;
                break;
            }
        }
    }

    cout<<a;

    return 0;
}
