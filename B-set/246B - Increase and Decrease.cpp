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
#define inf 10000000000
#define pp pair<char,int>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m,cnt=0;

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>m;
        cnt+=m;
    }

    if(cnt%n)
        cout<<(n-1);
    else
        cout<<n;

    return 0;
}
