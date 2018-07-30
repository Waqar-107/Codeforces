/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 150

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d\n",n)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s\n",s)

#define pb push_back

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m,cnt;

    sff(n,k);

    string s;
    cin>>s;

    sort(s.begin(),s.end());

    cnt=s[0]-'a'+1; k--; j=0;
    for(i=1;i<n;i++)
    {
        if(!k) break;

        if(s[i]-s[j]>=2)
        {
            cnt+=(s[i]-'a'+1);
            k--; j=i;
        }
    }

    if(!k)
        pf(cnt);

    else
        pf(-1);

    return 0;
}
