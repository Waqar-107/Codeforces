/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 100100

#define pp pair<char,int>

using namespace std;

bool cmp(pp a, pp b)
{
    return a.second<b.second;
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;

    string s;
    map<char,int> mp;

    cin>>s>>k;

    n=s.length();
    for(i=0;i<n;i++)
        mp[s[i]]++;

    vector<pp> vec;

    auto itr=mp.begin();
    while(itr!=mp.end())
    {
        vec.push_back({itr->first,itr->second});
        itr++;
    }

    sort(vec.begin(),vec.end(),cmp);

    int ans=0;
    for(pp e : vec)
    {
        if(e.second>k)break;

        //find all the occurrences of e.first
        k-=e.second;ans++;
        for(i=0;i<n;i++)
        {
            if(s[i]==e.first)
                s[i]='#';
        }
    }

    cout<<mp.size()-ans<<endl;
    for(i=0;i<n;i++)
    {
        if(s[i]=='#')continue;
        cout<<s[i];
    }

    return 0;
}

