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
#define pfs(s) printf("%s",s)

#define pb push_back

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;
    string s;

    cin>>s;

    n=s.length();
    int l[n], r[n];

    //how many small letters in my left
    l[0]=0;
    for(i=1;i<n;i++)
    {
        l[i]=l[i-1];
        if(s[i-1]>='a' && s[i-1]<='z' )
            l[i]++;
    }

    //how many capital letters in my right
    r[n-1]=0;
    for(i=n-2;i>=0;i--)
    {
        r[i]=r[i+1];
        if(s[i+1]>='A' && s[i+1]<='Z')
            r[i]++;
    }

    int mn=n;
    for(i=0;i<n;i++)
    {
        //let ith be the point where capital|small occurs
        mn=min(mn,r[i]+l[i]);
    }

    pf(mn);

    return 0;
}
