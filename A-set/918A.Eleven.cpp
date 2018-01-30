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
    int a,b;

    map<int,bool> fib;

    scanf("%d",&n);

    a=1,b=1;
    while(a<=n)
    {
        fib[a]=1;fib[b]=1;

        m=a+b;
        a=b;
        b=m;
    }

    for(i=1;i<=n;i++)
    {
        if(fib[i])
            printf("O");
        else
            printf("o");
    }

    return 0;
}
