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
#define N 350
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

	while (s.length() < 32)
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

	//delete 
	bool del(string s, int i, trieNode *curr)
	{
		if (i < s.length() && curr->next[s[i] - '0'] == NULL) return false;

		if (i == s.length() - 1)
		{
			delete(curr->next[s[i] - '0']);
			curr->next[s[i] - '0'] = 0;

			for (int i = 0; i < 2; i++) {
				if (curr->next[i]) return false;
			}
			
			return true;
		}

		bool f = del(s, i + 1, curr->next[s[i] - '0']);
		if (f)
			delete(curr->next[s[i] - '0']), curr->next[s[i] - '0'] = 0;

		for (int i = 0; i < 2; i++) {
			if (curr->next[i]) return false;
		}

		return true;
	}

public:
	trie() {
		root = new trieNode();
	}

	void insertWord(string s)
	{
		trieNode *curr = root;
		for (int i = 0; i < 32; i++)
		{
			if (curr->next[s[i] - '0'] == NULL)
				curr->next[s[i] - '0'] = new trieNode();

			curr = curr->next[s[i] - '0'];
		}

		curr->end = true;
	}

	void deleteWord(string s) {
		del(s, 0, root);
	}

	void query(string s)
	{
		trieNode *curr = root;

		int k;
		string ans = "";
		for (int i = 0; i < 32; i++)
		{
			k = s[i] - '0'; //cout << k << "  k\n";
			if (curr->next[0] == NULL && curr->next[1] != NULL)
				ans.pb((1 ^ k) + 48), curr = curr->next[1];

			else if (curr->next[1] == NULL && curr->next[0] != NULL)
				ans.pb((0 ^ k) + 48), curr = curr->next[0];

			else if (curr->next[1] != NULL && curr->next[0] != NULL) {
				//both are available
				//if s[i]==0 then we should take 1
				//if s[i]==1 then we should take 0, in both the xor will be 1
				ans.pb('1');
				if (k)
					curr = curr->next[0];
				else
					curr = curr->next[1];
			}

			else {
				pfs("error\n");
			}

			//cout << ans << endl;
		}

		ll number = 0;
		ll k2 = 1;
		
		for (int i = 31; i >= 0; i--)
			number += (ans[i] - 48)*k2, k2 *= 2;

		pfl(number); pfs("\n");
	}

	void freeMem() {
		fr(root);
	}
};

int main()
{
	freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	char ch[2];

	map<int, int> mp;
	trie t;

	sf(n); t.insertWord(decToBin(0));
	while (n--)
	{
		scanf("%s%d", ch, &k);

		if (ch[0] == '+') {
			mp[k]++; t.insertWord(decToBin(k));
		}

		else if (ch[0] == '-') {
			mp[k]--;
			if (!mp[k])
				t.deleteWord(decToBin(k));
		}

		else {
			t.query(decToBin(k));
		}
	}

	t.freeMem();

	return 0;
}
