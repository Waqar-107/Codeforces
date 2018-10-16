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
#include<list>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 35
#define inf 1000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d\n",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

map<string, int> file;
map<string, set<string>> folder;

int dfs(string src)
{
	if (src == ":)") return 0;
	int cnt = 0; //cout << src << " fld size: " << folder[src].size() << endl;
	for (string e : folder[src])
		cnt += dfs(e);

	//cout <<src<<" "<< cnt + 1; nl;
	return cnt + 1;
}

int main()
{
	freopen("in2.txt", "r", stdin);
	
	int i, j, k;
	int n, m;
	string s, t, t2;

	while (cin >> s)
	{
		t = "";
		n = s.length();

		vector<string> vec;
		for (i = 0; i < n; i++)
		{
			if (s[i] == '\\')
				vec.pb(t), t = "";
			else
				t.pb(s[i]);
		}

		//t now have the file name but we do not require it
		
		//for each sub-folder and the folder we are going to map it using its full path
		t = vec[0];
		n = vec.size();

		//file
		for (i = 1; i < n; i++)
		{
			t.pb(':');
			t += vec[i];

			file[t]++;
		}

		//folder - for each we are going to keep a set of sub-folders lying on the current folder
		//somewhat like a adjacent list of a graph then use dfs on it
		t = vec[0];
		for (i = 1; i < n - 1; i++)
		{
			t += vec[i]; t.pb(':'); 
			t2 = t + vec[i + 1] + ":";

			folder[t].insert(t2);
		}

		//this will indicate the end to a traversal
		t += vec[n - 1]; t += ":";
		folder[t].insert(":)");
	}
	
	//file calc
	int ans2 = 0; auto itr = file.begin();
	while (itr != file.end())
	{
		ans2 = max(ans2, itr->second);
		itr++;
	}
	
	//folder calc
	int ans1 = 0; auto itr2 = folder.begin();
	while (itr2 != folder.end())
	{
		ans1 = max(ans1, dfs(itr2->first) - 1);	//-1 as the calc includes the original folder as well
		itr2++;
	}

	cout << ans1 << " " << ans2 << endl;
	
	return 0;
}
