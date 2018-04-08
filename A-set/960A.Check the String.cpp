#define _CRT_SECURE_NO_WARNINGS

/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 150
#define inf 1000000
#define pp pair<int,int>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d\n",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s\n",s)

#define pb(n) push_back(n)

using namespace std;

int main()
{

    //freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;
    int x,y,z;
    string s;

    cin>>s;n=s.length();x=0;y=0;z=0;

    vector<char> ch;
    for(i=0;i<n;i++)
        ch.pb(s[i]);

    sort(ch.begin(),ch.end());
    for(i=0;i<n;i++)
    {
        if(ch[i]!=s[i])
        {
            cout<<"NO";
            return 0;
        }
    }

    for(i=0;i<n;i++)
    {
        if(s[i]=='a')
            x++;
        else if(s[i]=='b')
            y++;
        else if(s[i]=='c')
            z++;
    }

    //a*b*c*

    if(x==0 || y==0)
    {
        cout<<"NO";
        return 0;
    }

    if(z==x || z==y)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
