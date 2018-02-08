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

#define dbg printf("in\n")
#define nl printf("\n");
#define N 15
#define inf 100000
#define pp pair<char,char>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    int i, j, k;
    int n,m;
    int x,y;

    cin>>n;

    ll cnt=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            x=i^j;

            if(x<=n && x>0)
            {
                k=0;
                if(i+j<=x)
                    k++;
                else if(i+x<=j)
                    k++;
                else if(x+j<=i)
                    k++;

                if(k<=0)
                    cnt++;
            }
        }
    }

    cout<<cnt/6;

    return 0;
}
