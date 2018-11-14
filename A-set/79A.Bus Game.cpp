/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 60

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
	int x,y;

	sff(x,y);

    while(1)
    {
        //100*2+10*2
        if(x>=2 && y>=2)
            x-=2, y-=2;

        //100*1+10*12
        else if(x>=1 && y>=12)
            x--, y-=12;

        //10*22
        else if(y>=22)
            y-=22;

        else{pfs("Hanako\n");return 0;}

        //10*22
        if(y>=22)
            y-=22;

        //100*1+10*12
        else if(x>=1 && y>=12)
            x--, y-=12;

        //100*2+10*2
        else if(x>=2 && y>=2)
            x-=2, y-=2;

        else{pfs("Ciel\n");return 0;}
    }

	return 0;
}
