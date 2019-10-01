/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1010101
#define inf 1e18
#define mod 100000007

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int, int>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, q;

     int ks = 1e9;
    map<char, vector<int>> mp;
    map<string, int> cnt;

    string s;
    for(i = 0; i < 3; i++)
    {
        cin >> s;
        mp[s[1]].pb(s[0] - '0');

        cnt[s]++;
    }

    auto itr = cnt.begin();
    while(itr != cnt.end())
    {
        ks = min(ks, max(0, 3 - itr->second));
        itr++;
    }

    char ch[] = {'m', 'p', 's'};
    for(i = 0; i < 3; i++)
    {
        for(j = 1; j <= 7; j++)
        {
            k = 0;
            vector<int> ::  iterator itr;

            itr = find(mp[ch[i]].begin(), mp[ch[i]].end(), j);
            if(itr == mp[ch[i]].end())k++;

            itr = find(mp[ch[i]].begin(), mp[ch[i]].end(), j + 1);
            if(itr == mp[ch[i]].end())k++;

            itr = find(mp[ch[i]].begin(), mp[ch[i]].end(), j + 2);
            if(itr == mp[ch[i]].end())k++;

            ks = min(ks, k);

            //cout<<"k "<<k;nl;
        }
    }

    pf(ks);

    return 0;
}
