#define _CRT_SECURE_NO_WARNINGS

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
#define N 100010
#define pp pair<int,int>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s\n",s)

#define pb(n) push_back(n)

using namespace std;

int main()
{
	//freopen("in.txt", "r", stdin);

	int i,j,k;
	int n,m,x,y;
	string s;

	sf(n);
	cin>>s;

	int cnt=0;
	for(i=n-1;i>=0;i--)
    {
        //odd position
        if((i+1)%2)
            cnt++;

        else
        {
            //from i to 0 see if it possible to make 2 equals
            m=i+1;
            k=m/2-1;j=i;x=0;
            while(k>=0)
            {
                //cout<<k<<" "<<j<<" "<<s[j]<<" "<<s[k];nl
                if(s[j]==s[k])
                    x++,j--,k--;

                else
                    break;
            }

            if(x*2==m)
            {
                cnt+=(1+m/2);
                pf(cnt);
                return 0;
            }

            cnt++;
        }
    }

    pf(cnt);

	return 0;
}
