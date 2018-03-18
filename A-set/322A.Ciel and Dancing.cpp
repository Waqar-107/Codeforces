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
#define N 510
#define pp pair<int,int>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;

    cin>>n>>m;

    vector<pp> v;

    i=1,j=1;
    while(1)
    {
        v.push_back({i,j});

        if(n-i>=m-j)
            i++;

        else
            j++;

        if(i>n || j>m)
            break;
    }

    cout<<v.size()<<endl;
    for(pp e : v)
        cout<<e.first<<" "<<e.second<<endl;

    return 0;
}
