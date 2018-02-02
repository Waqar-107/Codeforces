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

    int i, j, k;
    int n,m,cnt;
    int l,r,x;
    string s;

    scanf("%d",&n);

    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    cin>>s;
    x=-1;

    for(i=0;i<n-1;i++)
    {
        if(s[i]=='0')
        {
            if(x==-1)
                l=0;
            else
                l=x+1;

            r=i;

            for(j=l;j<=r;j++)
            {
                if(a[j]>=l+1 && a[j]<=r+1)
                    continue;

                else
                {
                    printf("NO");
                    return 0;
                }
            }

            x=i;
        }
    }

    printf("YES");

    return 0;
}
