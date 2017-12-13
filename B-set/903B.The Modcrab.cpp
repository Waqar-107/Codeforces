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
#include<time.h>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 200
#define inf 1000000000
#define pp pair<string,int>

using namespace std;

int main()
{
	//freopen("in.txt", "r", stdin);

	int i,j,k;
	int n,m,t;
	int h1,a1,c1;
	int h2,a2;
	vector<int> v;

	scanf("%d%d%d",&h1,&a1,&c1);
	scanf("%d%d",&h2,&a2);

	while(h2>0)
    {
        //my turn to attack
        if(h1-a2>0 || h2-a1<=0)
        {
            h2-=a1;
            v.push_back(1);
        }

        else
            h1+=c1,v.push_back(2);

        //his turn
        h1-=a2;
    }

    printf("%d\n",v.size());
    for(i=0;i<v.size();i++)
    {
        if(v[i]==1)
            printf("STRIKE\n");
        else
            printf("HEAL\n");
    }

	return 0;
}
