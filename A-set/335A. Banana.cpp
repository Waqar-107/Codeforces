/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1000100
#define inf 1e18

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
    //freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;

    string s;
    cin >> s >> n;

    map<char, int> mp;
    for(i = 0; i < s.length(); i++)
        mp[s[i]]++;

    int ans = 1010;
    for(i = 1; i <= 1000; i++)
    {
        m = 0;
        auto itr = mp.begin();
        while(itr != mp.end())
        {
            if(itr->second % i == 0)
                m += itr->second / i;
            else
                m += itr->second /i + 1;

            itr++;
        }

        if(m <= n)
        {
            m = 0;
            cout << i << endl;
            auto itr = mp.begin();
            while(itr != mp.end())
            {
                if(itr->second % i == 0)
                    k = itr->second / i;
                else
                    k = itr->second / i + 1;

                m += k;
                while(k--)
                    cout << itr->first;;

                itr++;
            }

            while(m < n)
                cout << "a", m++;

            return 0;
        }
    }

    pf(-1);

    return 0;
}
