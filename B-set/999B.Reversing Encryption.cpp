/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 20100
#define pp pair<int,int>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;
    string s,t;

    cin>>n;
    cin>>s;

    vector<int> div;
    for(i=1;i<=n;i++){
        if(n%i==0)
            div.push_back(i);
    }

    n=div.size();
    for(i=0;i<n;i++)
    {
        m=div[i];

        //reverse from 1 to m
        t="";
        for(j=0;j<m;j++)
            t.push_back(s[j]);

        k=m-1;
        for(j=0;j<m;j++){
            s[j]=t[k];
            k--;
        }
    }

    cout<<s;

    return 0;
}
