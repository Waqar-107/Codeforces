/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,ll>
#define inf 1000000000

using namespace std;

int main()
{
    int i,j,k;
    int n,m,x;

    cin>>n>>m;

    int pos[n+1],neg[n+1];
    for(i=0;i<m;i++)
    {
        cin>>k;

        memset(pos,0,sizeof(pos));
        memset(neg,0,sizeof(neg));

        for(j=0;j<k;j++)
        {
            cin>>x;

            if(x>0)
                pos[x]++;
            else
                neg[x*-1]++;
        }

        bool f=0;
        for(j=1;j<=n;j++)
        {
            if(pos[j] && neg[j])
            {
                f=1;break;
            }
        }

        if(!f)
        {
            cout<<"YES";
            return 0;
        }
    }

    cout<<"NO";

    return 0;
}
