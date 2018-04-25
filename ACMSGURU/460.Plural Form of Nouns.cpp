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
#define N 150
#define inf 1000000
#define pp pair<int,int>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d\n",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s\n",s)

#define pb(n) push_back(n)

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;
    string s,t;

    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>s;

        //ch
        m=s.length();
        if(m>=2 && s[m-1]=='h' && s[m-2]=='c')
            cout<<s<<"es"<<endl;

        else if(s[m-1]=='x' || s[m-1]=='s' || s[m-1]=='o')
            cout<<s<<"es"<<endl;

        else if(s[m-1]=='f')
            s[m-1]='v',cout<<s<<"es"<<endl;

        else if(m>=2 && s[m-1]=='e' && s[m-2]=='f')
            s[m-2]='v',cout<<s<<"s"<<endl;

        else if(s[m-1]=='y')
            s[m-1]='i',cout<<s<<"es"<<endl;

        else
            cout<<s<<"s"<<endl;

    }


    return 0;
}

