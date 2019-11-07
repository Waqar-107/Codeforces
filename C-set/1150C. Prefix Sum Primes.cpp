/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 400100
#define inf 1e9

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
#define pp pair<ll, ll>

using namespace std;

bool status[N];
vector<int> primes;

void sieve_of_eratosthenes()
{
	int sq = sqrtl(N * 1.0);

	memset(status, 0, sizeof(status));

	status[0] = status[1] = 1;

	//all the evens except 2 is composite
	for (int i = 4; i < N; i += 2)
		status[i] = 1;

	for (int i = 3; i <= sq; i+=2)
	{
		if (!status[i])
		{
			//i is prime so its multipliers are not
			for (int j = i * i; j < N; j += i + i)
				status[j] = 1;
		}
	}

	for (int i = 0; i < N; i++)
	{
		if (!status[i])
			primes.push_back(i);
	}
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;
    int x, y;

    sieve_of_eratosthenes();
    int uno = 0, dos = 0;

    sf(n);
    for(i = 0; i < n; i++)
    {
        sf(m);

        if(m == 1)
            uno++;
        else
            dos++;
    }

    k = 0;
    int p = 0;
    while(uno || dos)
    {
        p = primes[k] - p;

        x = p / 2;
        y = p % 2;

        if(dos < x)
            y += (x - dos), x = dos;

        y = min(y, uno);
        dos -= x;
        uno -= y;

        //cout << uno << " "<<dos;nl;
        while(x)
        {
            pf(2), pfs(" ");
            x--;
        }

        while(y)
        {
            pf(1), pfs(" ");
            y--;
        }

        p = primes[k++];
    }

    return 0;
}
