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
#include<sstream>
#include<string>
#include<time.h>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 100
#define inf 100000

using namespace std;

int main()
{
	freopen("in.txt", "r", stdin);

	int i, j, k;
	int n,m;
	string s,t;

	map<string,string> mp;

	scanf("%d%d",&n,&m);

	for(i=0;i<n;i++)
    {
        cin>>s>>t;

        t+=";";
        mp[t]=s;
    }

    for(i=0;i<m;i++)
    {
        cin>>s>>t;
        cout<<s<<" "<<t<<" #"<<mp[t]<<endl;
    }

	return 0;
}
