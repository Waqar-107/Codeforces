#define _CRT_SECURE_NO_WARNINGS

/***from dust i have come, dust i will be***/

#include<algorithm>
#include<cctype>
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

#define dbg printf("in\n")
#define nl printf("\n");
#define N 1000100
#define inf 100000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

int uno[N];
int main()
{
	freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	int u, v;
	
	sf(n);
	int *ans = new int[n + 1];

	set<int> id;
	set<int> id2;

	memset(uno, 0, sizeof(uno));
	
	for (i = 0; i < n; i++)
	{
		sff(u, v);
	
		id.insert(u);
		id2.insert(v);
		uno[u] = v;
		
		//first person-helps to get the 2nd
		if (!u && v)
			ans[2] = v;
	}

	//the  first in line is front of someone but behind none
	//so can be found in uno but not in dos
	for (int e : id)
	{
		if (id2.find(e) == id2.end()) {
			ans[1] = e;
			break;
		}
	}

	for (i = 3; i <= n; i++)
		ans[i] = uno[ans[i - 2]];

	for (i = 1; i <= n; i++)
		pf(ans[i]);

	return 0;
}
