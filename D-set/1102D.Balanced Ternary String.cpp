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
#define pp pair<int,int>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;
    int x,y,z;

    string s;

    sf(n);
    cin>>s;

    m=n/3;

    x=y=z=0;
    for(i=0;i<n;i++)
    {
        if(s[i]=='0')x++;
        else if(s[i]=='1')y++;
        else z++;
    }

    //0
    if(x<m)
    {
      //if 1 and there are 1's in front of me then replace
      for(i=0;i<n;i++)
      {
        if(x>=m)break;
        if(s[i]=='1')
        {
            if(y>m)
                y--, s[i]='0', x++;
        }

        else if(s[i]=='2')
        {
            if(z>m)
                z--,s[i]='0',x++;
        }
      }
    }

    //1
    if(y<m)
    {
        //try to replace with 2
        //but if we come across extra 0 then 0
        //if 0 then check if there are extra 0
        //if there are extra then see if the current one is an extra
        k=0;
        for(i=0;i<n;i++)
        {
            if(y>=m)break;
            if(s[i]=='0')
            {
                if(k>=m)
                    s[i]='1',y++;
                k++;
            }

            else if(s[i]=='2')
            {
                if(z>m)
                    z--, y++, s[i]='1';
            }
        }
    }

    for(i=n-1;i>=0;i--)
    {
        if(z>=m)break;
        if(s[i]!='2'){
            if(s[i]=='0' && x>m)
                x--, z++, s[i]='2';

            else if(s[i]=='1' && y>m)
                y--, z++, s[i]='2';
        }

    }

    cout<<s;

    return 0;
}
