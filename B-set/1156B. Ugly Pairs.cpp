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

bool check(string s)
{
    int n = s.length();
    for(int i = 0; i < n; i++)
    {
        if(i + 1 < n)
        {
            if(abs(s[i] - s[i + 1]) == 1)
                return false;
        }
    }

    return true;
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, q;
    string s;

    sf(q);
    while(q--)
    {
        cin >> s;

        set<char> ss;
        int cnt[30] = { 0 };

        n = s.length();
        for(i = 0; i < n; i++)
            ss.insert(s[i]), cnt[s[i] - 'a']++;

        string odd, even;
        auto itr = ss.begin();
        while(itr != ss.end())
        {
            while(cnt[*itr - 'a']--)
                odd.pb(*itr);
            itr++;

            if(itr != ss.end())
                itr++;
        }

        itr = ss.begin();
        itr++;

        while(itr != ss.end())
        {
            while(cnt[*itr - 'a']--)
                even.pb(*itr);
            itr++;

            if(itr != ss.end())
                itr++;
        }

        if(check(odd + even))
            cout << (odd + even) << endl;
        else if(check(even + odd))
            cout << (even + odd) << endl;
        else
            cout << "No answer" << endl;
    }


    return 0;
}
