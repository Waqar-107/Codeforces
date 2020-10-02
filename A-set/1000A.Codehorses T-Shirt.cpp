/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 200100
#define inf 100000000
#define pp pair<int,int>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back

using namespace std;

int main()
{
	freopen("in.txt", "r", stdin);

	int i, j, k;
	int n, m;
	string s;

	vector<string> v1;
	vector<string> v2;

	cin >> n;
	string a[n];

	for(i = 0; i < n; i++)
		cin >> a[i];

	for(i = 0; i < n; i++)
	{
		cin >> s;

        //s not in a
		k = 0;
		for(j = 0; j < n; j++)
		{
			if(s == a[j])
			{
				a[j] = "#"; k = 1;
				break;
			}
		}

		if(!k)
			v2.pb(s);
	}

	for(i = 0; i < n; i++)
	{
		if(a[i] != "#")
			v1.pb(a[i]);
	}

	n = v1.size();
	m = 0;

	int x, y;
	for(i = 0; i < n; i++)
	{
        //change v1 to v2
		y = inf;
		for(j = 0; j < n; j++)
		{
            //cout<<v2[j]<<" "<<v1[i]<<endl;
			if(v2[j].length() == v1[i].length())
			{
				x = 0;
				for(k = 0; k < v2[j].length(); k++)
				{
					if(v2[j][k] != v1[i][k])
						x++;
				}

				y = min(y, x);
			}
		}

		m += y;
	}

	cout << m;

	return 0;
}
