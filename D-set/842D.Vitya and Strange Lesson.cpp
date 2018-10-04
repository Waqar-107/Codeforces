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
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 100000
#define inf 100000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<ll,int>

using namespace std;

string decToBin(int n)
{
	string s = "";
	while (n)
	{
		s.pb(n % 2 + 48);
		n /= 2;
	}

	while (s.length() < 22)
		s.pb('0');

	reverse(s.begin(), s.end());
	return s;
}

struct trieNode
{
	bool end;
	trieNode *next[2];

	trieNode() {
		end = false;
		for (int i = 0; i < 2; i++)
			next[i] = NULL;
	}
};

class trie
{
	trieNode *root;

	//recursively frees memory
	void fr(trieNode *curr)
	{
		for (int i = 0; i<2; i++)
		{
			if (curr->next[i])
				fr(curr->next[i]);
		}

		delete(curr);
	}

public:
	trie() {
		root = new trieNode();
	}

	void insertWord(string s)
	{
		trieNode *curr = root;
		for (int i = 0; i < 22; i++)
		{
			if (curr->next[s[i] - '0'] == NULL)
				curr->next[s[i] - '0'] = new trieNode();

			curr = curr->next[s[i] - '0'];
		}

		curr->end = true;
	}

	void query(string s)
	{
		trieNode *curr = root;

		int id; string ans = "";
		for (int i = 0; i < 22; i++)
		{
			id = s[i] - '0';
			if (curr->next[0] != NULL && curr->next[1] == NULL)
				ans.pb((id ^ 0) + 48), curr = curr->next[0];

			else if (curr->next[1] != NULL && curr->next[0] == NULL)
				ans.pb((id ^ 1) + 48), curr = curr->next[1];

			else
				ans.pb('0'), curr = curr->next[id];

			//cout <<i<<" "<< ans << endl;
		}

		ll n = 0, k = 1;
		for (int i = 21; i >= 0; i--)
			n += (ans[i] - 48)*k, k *= 2;

		pfl(n); pfs("\n");
	}

	void freeMem() {
		fr(root);
	}
};

int main()
{
	freopen("in.txt", "r", stdin);

	int i, j, k;
	int n, m, q;

	trie t;

	sff(n, m); map<int, bool> mp;
	for (i = 0; i < n; i++)
	{
		sf(k);
		mp[k] = true;
	}

	k = N * 6 + 100;
	for (i = 0; i <= k; i++)
	{
		if (!mp[i])
			t.insertWord(decToBin(i));
	}

	q = 0;
	while (m--)
	{
		sf(k);
		q ^= k;

		t.query(decToBin(q));
	}

	t.freeMem();

	return 0;
}
