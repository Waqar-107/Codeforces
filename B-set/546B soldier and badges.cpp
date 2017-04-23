/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<ll,ll>

#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
	//freopen("in.txt","r",stdin);

	ll i, j, k;
	ll n, m;
	ll count=0;

	cin >> n;
	ll *a = new ll[n];

	for (i = 0; i < n; i++)
		cin >> a[i];

	sort(a, a + n);
	ll x = a[0]+1;

	for (i = 1; i < n; i++)
	{
		if (a[i] < x)
		{
			count += (x - a[i]);
			a[i] += (x - a[i]);
		}

		x = a[i] + 1;
		//cout << x << endl;
	}

	cout << count << endl;
	
	//cin>>j;
	return 0;
}
