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

//gives answer in 64-bits
string decToBin(ull n)
{
	string s = "";
	while (n)
	{
		s.pb(n % 2 + 48);
		n /= 2;
	}

	while (s.length() < 64)
		s.pb('0');

	reverse(s.begin(), s.end());
	return s;
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, q;
    ull l, r;

    sf(n);
    while(n--)
    {
        cin >> l >> r;

        string L = decToBin(l);
        ull p = 1;
        for(i = 63; i >= 0; i--)
        {
            // cout << L[i] << " "<<l<<" "<<p<<" "<<r<<" "<<(l + p <= r);nl;
            if(L[i] == '0')
            {
                if(l + p <= r)
                    l += p;
            }

            p *= 2;
        }

        cout << l << endl;
    }


    return 0;
}
