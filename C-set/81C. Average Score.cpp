/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 40101
#define inf 100000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

bool cmp(pp a, pp b){
    if(a.first == b.first)
        return a.second < b.second;

    return a.first > b.first;
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;
    int a, b;

    sf(n);
    sff(a, b);

    int ans[n];
    vector<pp> vec(n);
    for(i = 0; i < n; i++)
        sf(vec[i].first), vec[i].second = i;

    if(a < b)
    {
        sort(vec.begin(), vec.end(), cmp);

        for(i = 0; i < a; i++)
            ans[vec[i].second] = 1;
        for(i = a; i < n; i++)
            ans[vec[i].second] = 2;
    }

    else if(a == b)
    {
        for(i = 0; i < a; i++)
            ans[i] = 1;
        for(i = a; i < n; i++)
            ans[i] = 2;
    }

    else
    {
        sort(vec.begin(), vec.end(), greater<pp>());

        for(i = 0; i < b; i++)
            ans[vec[i].second] = 2;
        for(i = b; i < n; i++)
            ans[vec[i].second] = 1;
    }

    for(i = 0; i < n; i++)
        pf(ans[i]), pfs(" ");

    return 0;
}
