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
#define N 100005
#define mod 1000000007

using namespace std;

int main()
{
	//freopen("in2.txt","r",stdin);
	
	ull n, m;
	
	cin >> n;

	ull cnt = n*(12 + (n - 1) * 6);
	cnt /= 2;
	
	cout << cnt+1 << endl;

	return 0;
}
