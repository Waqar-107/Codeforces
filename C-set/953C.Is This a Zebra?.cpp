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
#define N 510
#define inf 1000000

using namespace std;


int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, cnt;

    scanf("%d",&n);

    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    int st=0,en=1;
    if(a[0])
        swap(st,en);

    i=0;cnt=0;
    while(a[i]!=en && i<n)
    {
        cnt++;i++;
    }

    stack<int> ss;
    for(i=0;i<n;i++)
    {
        if(a[i]==st)
            ss.push(st);

        else
        {
            if(ss.size())
                ss.pop();

            else
            {
                printf("NO\n");
                return 0;
            }
        }
    }

    if(ss.size()>0 && ss.size()==cnt)
        printf("YES\n");
    
    else if(ss.size()==0)
        printf("YES\n");
    
    else
        printf("NO\n");

    return 0;
}
