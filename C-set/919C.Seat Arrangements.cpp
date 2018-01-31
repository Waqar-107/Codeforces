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
#include<sstream>
#include<string>
#include<time.h>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 1005
#define inf 100000
#define pp pair<int,int>

using namespace std;

int main()
{
	//freopen("in.txt", "r", stdin);

	ll i, j, k;
	ll n,m;
	ll x,y,cnt;

	scanf("%I64d%I64d%I64d",&n,&m,&k);

	string s[n];
	for(i=0;i<n;i++)
        cin>>s[i];

    cnt=0;

    if(n*m==1)
    {
        if(s[0][0]=='.' && k==1)
            printf("1");
        else
            printf("0");

        return 0;
    }

    //ans will be the number of empty seat
    if(k==1)
    {
        cnt=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(s[i][j]=='.')
                    cnt++;
            }
        }

        printf("%I64d",cnt);
        return 0;
    }

    //for each row
    for(i=0;i<n;i++)
    {
        x=0;
        for(j=0;j<m;j++)
        {
            if(s[i][j]=='.')
                x++;
            else
            {
                y=x-k+1;
                cnt+=max(y,(ll)0);
                x=0;
            }
        }

        y=x-k+1;
        cnt+=max(y,(ll)0);
    }

    for(j=0;j<m;j++)
    {
        x=0;
        for(i=0;i<n;i++)
        {
            if(s[i][j]=='.')
                x++;
            else
            {
                y=x-k+1;
                cnt+=max(y,(ll)0);
                x=0;
            }
        }

        y=x-k+1;
        cnt+=max(y,(ll)0);
    }

    printf("%I64d",cnt);

	return 0;
}
