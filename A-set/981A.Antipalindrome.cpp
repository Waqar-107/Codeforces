/***from dust i have come, dust i will be***/

#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<functional>
#include<iomanip>
#include<iostream>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<stack>
#include<string>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 50700

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
    //freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m,mx=0;
    string s;

    cin>>s;

    m=s.length()-1;
    for(i=0; i<s.length()/2; i++)
    {
        if(s[i]==s[m])
            m--;
        else
        {
            cout<<s.length();
            return 0;
        }
    }

    n=s.length();
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            //check if not palindrome
            m=j;k=i;
            while(k<m)
            {
                if(s[k]!=s[m])
                {
                    mx=max(mx,j-i+1);
                    break;
                }

                m--;k++;
            }
        }
    }

    cout<<mx;

    return 0;
}
