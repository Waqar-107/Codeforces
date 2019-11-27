/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 600
#define inf 100000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

bool cmp(pair<pp, int> a, pair<pp, int> b)
{
    if(a.first.first == b.first.first)
        return a.first.second > b.first.second;

    return a.first.first < b.first.first;
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;
    int x, y;

    sf(n);

    vector<pair<pp, int>> vec;
    for(i = 0; i < n; i++)
    {
        sff(x, y);
        vec.pb({{x, y}, i + 1});
    }

    sort(vec.begin(), vec.end(), cmp);

    //for(pp e : vec)
        //cout<<e.first<<" "<<e.second<<endl;
    x = -1, y = -1;
    for(i = 0; i < n - 1; i++)
    {
        // if L is equal then R of the second is less than the first
        if(vec[i].first.first == vec[i + 1].first.first){
            pff(vec[i + 1].second, vec[i].second);
            return 0;
        }

        else if(vec[i].first.second >= vec[i + 1].first.second){
            pff(vec[i + 1].second, vec[i].second);
            return 0;
        }
    }

    pff(-1, -1);

    return 0;
}
