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

struct trieNode
{
	bool end;
	trieNode *next[3];

	trieNode() {
		end = false;
		for (int i = 0; i < 3; i++)
			next[i] = NULL;
	}
};

bool ans;
string s;

class trie
{
	trieNode *root;

	//recursively frees memory
	void fr(trieNode *curr)
	{
		for (int i = 0; i<3; i++)
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

	void insertWord()
	{
		trieNode *curr = root;

		int i, k;
		int n = s.length();
		for (i = 0; i < n; i++)
		{
			k = s[i] - 'a';
			if (curr->next[k] == NULL)
				curr->next[k] = new trieNode();

			curr = curr->next[k];
		}

		curr->end = true;
	}

	void traverse(int idx, trieNode *curr, int x)
	{
		//cout << s[idx] << " " << idx << " " << x; nl

		if (x < 0) return;
		
		for (int i = 0; i < 3; i++)
		{
			if (curr->next[i] && !ans)
			{
				//cout << "traverse : " <<char( i + 'a') << endl;
				//will not go further 
				if (idx == s.length() - 1)
				{
					//match the string length also
					//the string ust differ in  "exactly one position"
					if (s[idx] == i + 'a' && curr->next[i]->end && x == 0) {
						ans = true; return;
					}

					else if (s[idx] != i + 'a' && x == 1 && curr->next[i]->end) {
						ans = true;
					}
				}

				else 
				{
					if (s[idx] == i + 'a')
						traverse(idx + 1, curr->next[i], x);
					else
						traverse(idx + 1, curr->next[i], x - 1);
				}
			}
		}
	}

	void query()
	{
		ans = false;
		
		traverse(0, root, 1);

		if (ans)
			pfs("YES\n");

		else
			pfs("NO\n");
	}

	void freeMem() {
		fr(root);
	}
};

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	
	trie t;

	sff(n, m);
	for (i = 0; i < n; i++)
	{
		cin >> s;
		t.insertWord();
	}

	for (i = 0; i < m; i++)
	{
		cin >> s;
		t.query();
	}

	return 0;
}
