#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,int>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k;
    int n,m;
    int l,r,x;

    scanf("%d%d",&n,&m);

    set<int> alive;
    for(i=1;i<=n+5;i++)
        alive.insert(i);

    int ans[n+1];
    memset(ans,0,sizeof(ans));

    for(i=0;i<m;i++)
    {
        scanf("%d%d%d",&l,&r,&x);

        set<int>::iterator itr=alive.lower_bound(l);

        while(*itr<=r && itr!=alive.end())
        {
            if(*itr!=x)
            {
                ans[*itr]=x;
                j=*itr;itr++;
                alive.erase(j);
            }

            else
                itr++;
        }
    }

    for(i=1;i<=n;i++)
        cout<<ans[i]<<" ";

    return 0;
}
