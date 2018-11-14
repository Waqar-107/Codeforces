/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 60

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

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m,d1,d2;

    sff(n,k);

    string s;
    cin>>s;

    for(i=0;i<n;i++)
    {
        if(k<=0)break;

        d1=s[i]-'a';
        d2='z'-s[i];

        if(d1>=d2)
        {
            if(k>=d1)
                s[i]='a';
            else
                s[i]-=k;

            k-=d1;
        }

        else
        {
            if(k>=d2)
                s[i]='z';
            else
                s[i]+=k;

            k-=d2;
        }
    }

    if(k<=0)
        cout<<s;

    else
        cout<<"-1";

    return 0;
}
