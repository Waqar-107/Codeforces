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
    int n,m,x;

    cin>>n;

    int b=0,c=0;
    for(i=0;i<n;i++)
    {
        cin>>m;

        if(m<0)
            c+=m;
        else
            b+=m;
    }

    cout<<(b-c);

    return 0;
}
