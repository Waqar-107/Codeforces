/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 100100

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
#define pp pair<ll,char>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m,t;

    sf(t);
    while(t--)
    {
        string s;
        sff(n,k);

        m=n/k;
        for(j=0;j<k;j++)
        {
            for(i=0;i<m;i++)
                s.push_back(j+'a');
        }

        m=n%k;
        for(i=0;i<m;i++)
        {
            s.push_back(i+'a');
        }

        cout<<s<<endl;

    }

    return 0;
}
