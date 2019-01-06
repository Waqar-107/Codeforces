/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 100100
#define inf 1000000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%lld%lld",&n,&m)

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
    int n,m;

    string s,t;

    cin>>s;
    sf(n);

    int x=0,y=0;

    m=s.length();
    for(i=0;i<m;i++)
    {
        if(s[i]=='?')x++;
        else if(s[i]=='*')y++;
    }

    if(y==0 && x>0)
    {
        m-=x;
        for(i=1;i<s.length();i++)
        {
            if(m==n)break;
            if(s[i]=='?')
            {
                if(n<m){
                    s[i-1]='#';
                    m--;
                }
            }
        }

        for(i=0;i<s.length();i++)
        {
            if(s[i]=='#' || s[i]=='?')continue;
            t.pb(s[i]);
        }
    }

    else
    {
        char ch;
        for(i=s.length()-1;i>=0;i--)
        {
            if(s[i]=='*')
            {
                k=i-1; ch=s[k];
                break;
            }
        }

        for(i=1;i<s.length();i++)
        {
            if(s[i]=='*' || s[i]=='?')
            {
                if(y){
                    s[i-1]='#';
                    m-=2;
                }
            }
        }

        for(i=0;i<s.length();i++)
        {
            if(i==k)
            {
                while(m<n){
                    m++;
                    t.pb(ch);
                }
            }

            if(s[i]=='*' || s[i]=='#' || s[i]=='?')continue;
            t.pb(s[i]);
        }
    }

    if(t.size()!=n){
        pfs("Impossible\n");
        return 0;
    }

    cout<<t<<endl;

    return 0;
}
