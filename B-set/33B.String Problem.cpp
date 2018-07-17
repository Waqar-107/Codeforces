/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 30
#define inf 100000000
#define pp pair<int,int>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d\n",n)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back

using namespace std;

int dist[N][N];
int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;
    int u,v;

    for(i=0;i<N;i++){
        for(j=0;j<N;j++)
            dist[i][j]=inf;
    }

    for(i=0;i<N;i++)
        dist[i][i]=0;

    string s,t;
    cin>>s>>t;

    if(s.length()!=t.length()){
        cout<<"-1";
        return 0;
    }

    cin>>n;
    char c1,c2,c3;

    while(n--)
    {
        cin>>c1>>c2>>k;
        dist[c1-'a'][c2-'a']=min(dist[c1-'a'][c2-'a'],k);
    }

    //floyd-warshall
    for(k=0;k<26;k++)
    {
        for(i=0;i<26;i++)
        {
            for(j=0;j<26;j++)
                dist[i][j]=min(dist[i][j], dist[i][k]+dist[k][j]);
        }
    }

    n=s.length();
    int cost=0, mn;

    for(i=0;i<n;i++)
    {
        if(s[i]!=t[i])
        {
            mn=inf;c3='#';
            for(j='a';j<='z';j++)
            {
                k=dist[s[i]-'a'][j-'a']+dist[t[i]-'a'][j-'a'];
                if(k<=mn)
                    mn=k, c3=j;
            }

            cost+=mn;
            s[i]=t[i]=c3;

            if(mn>=inf){
                cout<<"-1";
                return 0;
            }
        }
    }

    cout<<cost<<endl;
    cout<<s;

    return 0;
}
