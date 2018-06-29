/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 150
#define inf 1000000000
#define pp pair<int,int>

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
    int n,m,cnt;
    int a,b,c;
    string s;

    sf(n);sff(a,b);
    cin>>s;

    int x=0,y=0;
    for(i=0;i<n;i++)
    {
        if(s[i]=='0')
            x++;
        else if(s[i]=='1')
            y++;
    }

    c=n-x-y;

    //first replace 0's if needed
    cnt=0;
    if(x<a){
        //replace some 1's and 2's
        for(i=0;i<n;i++)
        {
            if(s[i]=='1' && y>b && x<a)
                y--, s[i]='0', x++, cnt++;
        }

        //now try replacing 2's
        for(i=0;i<n;i++)
        {
            if(s[i]=='2' && x<a)
                x++, cnt++, s[i]='0';
        }
    }

    else if(x>a){
        for(i=0;i<n;i++)
        {
            if(x>a && s[i]=='0')
            {
                if(y<b)
                    s[i]='1', y++,x--,cnt++;
                else
                    s[i]='2', cnt++,x--;
            }
        }
    }

    if(x!=a){
        pf(-1);
        return 0;
    }

    //now try 2
    if(y<b)
    {
        for(i=0;i<n;i++)
        {
            if(y<b && s[i]=='2')
                y++, cnt++, s[i]='1';
        }
    }

    else if(y>b)
    {
        for(i=0;i<n;i++)
        {
            if(y>b && s[i]=='1')
                y--, cnt++, s[i]='2';
        }
    }

    if(y!=b){
        pf(-1);
        return 0;
    }

    pf(cnt);
    cout<<s;

    return 0;
}
