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

#define dbg printf("in\n")
#define nl printf("\n");
#define N 15
#define inf 100000000
#define pp pair<char,char>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    int i, j, k;
    int n,m;
    ll x,y;
    ll a,b;

    cin>>a>>b;

    if(b==0)
    {
        printf("No");
        return 0;
    }

    if(b==1)
    {
        if(a==0)
            printf("Yes");
        else
            printf("No");

        return 0;
    }

    x=b-1;
    a-=x;

    if(a==0)
    {
        printf("Yes");return 0;
    }

    if(a<0)
    {
        printf("No");return 0;
    }

    a++;
    y=a-1;

    if(y%2==0)
        printf("Yes");
    else
        printf("No");

    return 0;
}
