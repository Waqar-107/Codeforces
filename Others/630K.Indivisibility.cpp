#define _CRT_SECURE_NO_WARNINGS

/***from dust i have come, dust i will be***/

#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<functional>
#include<iomanip>
#include<iostream>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<stack>
#include<string>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 200138
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
#define pp pair<int,int>

using namespace std;

ll d[15];

int main()
{
	//freopen("in2.txt", "r", stdin);

	ll i, j, k;
	ll n, m;

	sfl(n); 

	//2 3 5 7 are the primes and every number can be factorized
	//into them except the primes

	//amount of numbers divisible by x in range (1-n) is n/x
	m =n- (n / 2) - (n / 3) - (n / 5) - (n / 7);

	//numbers divided by 2 * (3 or 5 or 7) has been counted twice
	m += (n / 6);
	m += (n / 10);
	m += (n / 14);

	//numbers divided by 3 * (5 or 7) has been counted twice
	m += (n / 15);
	m += (n / 21);

	//similarly 5 * 7
	m += (n / 35);

	m -= n / (2 * 3 * 5);
	m -= n / (2 * 3 * 7);
	m -= n / (2 * 5 * 7);
	m -= n / (3 * 5 * 7);

	m += n/ (2 * 3 * 5 * 7);

	//m numbers are divisible by any of the numbers
	pfl(m);

	return 0;
}
