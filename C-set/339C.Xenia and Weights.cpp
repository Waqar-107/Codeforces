/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 1100
#define inf 100000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

string str;
int taken[N], LR[2];

//using recursion we determine each possible permutation
void solve(int s,int m)
{
    //m weights done
    if(s==m+1)
    {
        cout<<"YES"<<endl;
        for(int i=1;i<=m;i++)
            cout<<taken[i]<<" ";

        exit(0);
    }

    for(int i=1;i<=10;i++)
    {
        //i kg is present
        if(str[i-1]=='1')
        {
            //if s==0 then take it, else check if jth weight was taken in last step
            if(!s || i!=taken[s-1])
            {
                //check if taking this will make one side outnumber the other
                //odd for left, and even for right
                if(LR[s%2]+i>LR[(s+1)%2])
                {
                    LR[s%2]+=i; taken[s]=i;
                    solve(s+1,m);                    // solve for the next
                    taken[s]=-1;LR[s%2]-=i;          //by taking i kg at this step the answer is NO so we are not taking it now!!
                }
            }
        }
    }
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;

    cin>>str>>m;
    solve(1,m);

    cout<<"NO";

    return 0;
}
