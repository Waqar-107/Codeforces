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
#include<sstream>
#include<stack>
#include<string>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 1100
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

bool cmpH(pp a, pp b) {
	return a.second < b.second;
}

int main()
{
	freopen("in2.txt","r",stdin);

	int i, j, k;
	int n, m;
	int x, y;

	vector<pp> vec, ans;

	for (i = 0; i < 3; i++)
	{
		sff(x, y);
		vec.pb({ x,y });
	}

	//all are in the same vertical line
	if (vec[0].first == vec[1].first && vec[1].first == vec[2].first)
	{
		sort(vec.begin(), vec.end(), cmpH);
	
		for (i = vec[0].second; i <= vec[2].second; i++)
			ans.pb({ vec[0].first, i });
	}

	//all are in  the same horizontal line
	else if (vec[0].second == vec[1].second && vec[1].second == vec[2].second)
	{
		sort(vec.begin(), vec.end());
		
		for (i = vec[0].first; i <= vec[2].first; i++)
			ans.pb({ i, vec[0].second });
	}

	else
	{
		sort(vec.begin(), vec.end(), cmpH);
		
		//---------------------------------------------------------------------------------
		//a horizontal line has been drawn through vec[1]
		//now we draw two verticals
		if (vec[1].second > vec[0].second)
		{
			for (i = vec[1].second - 1; i >= vec[0].second; i--)
				ans.pb({ vec[0].first, i });
		}
		
		else
		{
			for (i = vec[1].second + 1; i <= vec[0].second; i++)
				ans.pb({ vec[0].first, i });
		}
		//------------------------------------
		if (vec[1].second > vec[2].second)
		{
			for (i = vec[1].second - 1; i >= vec[2].second; i--)
				ans.pb({ vec[2].first, i });
		}

		else
		{
			for (i = vec[1].second + 1; i <= vec[2].second; i++)
				ans.pb({ vec[2].first, i });
		}
		//---------------------------------------------------------------------------------
		k = vec[1].second; //save the y-coord as we are going to sort again
		//---------------------------------------------------------------------------------
		//now get the horizontal line
		sort(vec.begin(), vec.end());
		
		for (i = vec[0].first; i <= vec[2].first; i++)
			ans.pb({ i, k });
	}
	
	pf(ans.size()); nl;
	for (pp e : ans)
		pff(e.first, e.second); nl;

	return 0;
}
