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
#define pp pair<char,char>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    int i, j, k;
    int n,m;
    float f,f2;

    scanf("%d",&n);

    float x=-10000000;
    for(i=0;i<n;i++)
    {
        scanf("%f",&f);

        if(f<0)
        {
            x=max(x,f);
            continue;
        }

        f2=f;
        f=sqrt(f);

        if(f!=ceil(f))
            x=max(x,f2);
    }

    k=x;
    printf("%d",k);

    return 0;
}
