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
#define N 220
#define inf 100000
#define pp pair<char,char>

using namespace std;

int l[N],r[N],ase[N];
int main()
{
    //freopen("in.txt", "r", stdin);

    int i, j, k;
    int n,m,t;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d%d",&n,&k);

        memset(ase,0,sizeof(ase));
        memset(l,0,sizeof(l));
        memset(r,0,sizeof(r));

        for(i=0;i<k;i++)
        {
            scanf("%d",&m);
            ase[m]=1;
        }

        //l
        if(ase[1])
            l[1]=1;
        else
            l[1]=inf;

        for(i=2;i<=n;i++)
        {
            if(ase[i])
                l[i]=1;

            else
            {
                if(l[i-1]==inf)
                    l[i]=inf;
                else
                    l[i]=l[i-1]+1;
            }
        }

        //r
        if(ase[n])
            r[n]=1;
        else
            r[n]=inf;

        for(i=n-1;i>=0;i--)
        {
            if(ase[i])
                r[i]=1;

            else
            {
                if(r[i+1]==inf)
                    r[i]=inf;
                else
                    r[i]=r[i+1]+1;
            }
        }

        m=1;
        for(i=1;i<=n;i++)
            m=max(m,min(r[i],l[i]));

        printf("%d\n",m);
    }

    return 0;
}
