/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 1100
#define inf 10000000000000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d\n",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<ll,int>

using namespace std;

int main()
{
    freopen("in.txt","r",stdin);

    int i,j,k;
    int n,m;

    map<int,int> mp;

    sf(n);
    int a[n];
    for(i=0; i<n; i++)
        sf(a[i]), mp[a[i]]++;

    char ans[n];
    int A=0,B=0;

    //take the ones
    for(i=0; i<n; i++)
    {
        if(mp[a[i]]==1)
        {
            if(A<=B)
                ans[i]='A', A++;
            else
                ans[i]='B', B++;
        }
    }

    auto itr=mp.begin();
    while(itr!=mp.end())
    {
        if(itr->second==1)
        {
            itr++;
            continue;
        }

        if(itr->second==2)
        {
            for(i=0; i<n; i++)
            {
                if(a[i]==itr->first)
                    ans[i]='A';
            }

            itr++;
            continue;
        }

        //put'em in A
        if(A==B)
        {
            for(i=0; i<n; i++)
            {
                if(a[i]==itr->first)
                    ans[i]='A';
            }
        }

        else
        {

            if(A>B)
            {
                B++;
                for(i=0; i<n; i++)
                {
                    if(a[i]==itr->first)
                    {
                        ans[i]='B';
                        break;
                    }
                }

                for(j=i+1; j<n; j++)
                {
                    if(a[j]==itr->first)
                        ans[j]='A';
                }
            }

            else
            {
                A++;
                for(i=0; i<n; i++)
                {
                    if(a[i]==itr->first)
                    {
                        ans[i]='A';
                        break;
                    }
                }

                for(j=i+1; j<n; j++)
                {
                    if(a[j]==itr->first)
                        ans[j]='B';
                }
            }
        }

        itr++;
    }

    if(A==B)
    {
        cout<<"YES\n";
        for(i=0; i<n; i++)
            cout<<ans[i];
    }

    else
        cout<<"NO";

    return 0;
}

