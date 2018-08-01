/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 200100
#define inf 100000000
#define pp pair<int,int>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;

    string s,t;

    sf(n);

    cin>>s>>t;

    vector<int> ans;
    for(i=0;i<n;i++)
    {
        if(s[i]==t[i])
            continue;

        //find t[i] starting from s[i+1]
        k=-1;
        for(j=i+1;j<n;j++)
        {
            if(s[j]==t[i]){
                k=j;
                break;
            }
        }

        if(k==-1){
            pf(-1);return 0;
        }

        for(j=k;j>i;j--)
        {
            swap(s[j],s[j-1]);
            ans.pb(j-1);
        }
    }

    if(ans.size()>10000)
        pf(-1);

    else
    {
        pf(ans.size());
        pfs("\n");

        for(i=0;i<ans.size();i++)
            pf(ans[i]+1);
    }

    return 0;
}
