/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 150
#define inf 100000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d\n",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

int mem[N], block=0;

void pfa(int n)
{
    for(int i=1;i<=n;i++)
        cout<<mem[i]<<" ";

    nl
}

void alloc(int n,int sz)
{
    int cnt=0, idx=-1;
    for(int i=1;i<=n;i++)
    {
        if(mem[i]==-1 && idx==-1)
            cnt++, idx=i;
        else if(mem[i]==-1)
            cnt++;
        else
        {
            if(cnt<sz)
                cnt=0, idx=-1;
        }

        if(cnt==sz)
        {
            block++;
            for(int j=idx;j<idx+sz;j++)
                mem[j]=block;

            pf(block);
            return;
        }
    }

    pfs("NULL\n");
}

void erase(int n,int x)
{
    bool f=0;
    for(int i=1;i<=n;i++)
    {
        if(mem[i]==x)
            mem[i]=-1, f=1;
    }

    if(!f)
        pfs("ILLEGAL_ERASE_ARGUMENT\n");
}

void defragment(int n)
{
    int i,j,k;
    for(i=1;i<=n;i++)
    {
        if(mem[i]>0)
        {
            k=-1;
            for(j=i-1;j>0;j--)
            {
                if(mem[j]==-1)
                    k=j;

                else
                {
                    if(k>=1)
                    {
                        swap(mem[i],mem[k]);
                        k=-1;
                        break;
                    }
                }
            }

            if(k!=-1)
                swap(mem[i],mem[k]);
        }
    }
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;
    ll x;
    string s;

    fill(mem,mem+N,-1);

    sff(n,m);
    while(n--)
    {
        cin>>s;
        if(s=="defragment")
            defragment(m);

        else
        {
            sfl(x);
            if(s=="alloc")
                alloc(m,(int)x);

            else
            {
                if(x>=1)
                    erase(m,(int)x);
                else
                    pfs("ILLEGAL_ERASE_ARGUMENT\n");
            }

           // pfa(m);
        }
    }

    return 0;
}
