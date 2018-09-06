/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 105
#define inf 10000000000000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d\n",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k;
    int n,m;

    vector<int> vec;

    sf(n);n--;
    vec.pb(1);

    while(n--)
    {
        vec.pb(1);
        while(vec.size()>1)
        {
            i=vec.size()-1; j=i-1;

            if(vec[i]!=vec[j])
                break;

            k=vec[i];
            vec.pop_back(); vec.pop_back();
            vec.pb(k+1);
        }
    }

    for(int e : vec)
        pf(e);

    return 0;
}
