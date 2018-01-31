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
#define N 5010
#define inf 100000000
#define pp pair<char,char>

using namespace std;

vector<int> v[N];
int main()
{
    //freopen("in.txt", "r", stdin);

    int i, j, k;
    int n,m;

    scanf("%d",&n);

    n*=2;
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        v[m].push_back(i+1);
    }

    vector<int> fin;
    for(i=1;i<N;i++)
    {
        if(v[i].size()%2==0)
        {
            if(v[i].size())
            {
                for(j=0;j<v[i].size();j+=2)
                    fin.push_back(v[i][j]),fin.push_back(v[i][j+1]);
            }
        }

        else
        {
            printf("-1\n");
            return 0;
        }
    }

    n=fin.size();
    for(i=0;i<n;i+=2)
        printf("%d %d\n",fin[i],fin[i+1]);

    return 0;
}
