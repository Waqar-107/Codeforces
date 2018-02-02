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
#define N 1010
#define inf 100000
#define pp pair<char,char>

using namespace std;

struct data
{
    int i,s,e;

    data(){}
    data(int idx,int st,int en)
    {
        i=idx;
        s=st;
        e=en;
    }
};

bool cmp(data a,data b)
{
    if(a.s==b.s)
        return a.i<b.i;

    return a.s<b.s;
}

data a[N];

int main()
{
    //freopen("in.txt", "r", stdin);

    int i, j, k;
    int n,m,t;
    int l,r;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);

        for(i=0;i<n;i++)
        {
            scanf("%d%d",&l,&r);

            a[i]=data(i,l,r);
        }

        sort(a,a+n,cmp);

        m=1;
        for(i=0;i<n;i++)
        {
            //cout<<a[i].i<<" "<<a[i].e<<" "<<m<<endl;
            if(a[i].e<m)
                printf("0 ");

            else
            {
                printf("%d ",max(a[i].s,m));
                m=max(m+1,a[i].s+1);
            }
        }

        printf("\n");
    }

    return 0;
}
