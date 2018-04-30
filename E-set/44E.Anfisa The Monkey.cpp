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
#define N 400
#define pp pair<int,int>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d\n",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s\n",s)

#define pb push_back

using namespace std;

int main()
{
	freopen("in.txt", "r", stdin);

	int i,j,k;
	int n,m;
	int a,b;
	string s;

	cin>>k>>a>>b;
	cin>>s;

	n=s.length();
	if(b*k<n || a*k>n)
    {
        cout<<"No solution"<<endl;
        return 0;
    }

    int x[k];
    for(i=0;i<k;i++)
        x[i]=a;

    n-=(a*k);
    for(i=k-1;i>=0;i--)
    {
        if(n<=b-a)
        {
            x[i]+=n;
            break;
        }

        else
            x[i]=b,n+=a,n-=b;
    }

    m=0;
    for(i=0;i<k;i++)
    {
        for(j=0;j<x[i];j++)
            cout<<s[m],m++;

        cout<<endl;
    }

	return 0;
}
