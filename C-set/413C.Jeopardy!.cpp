/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 20100
#define pp pair<int,int>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;

    scanf("%d%d",&n,&m);

    int price[n];
    for(i=0;i<n;i++)
        scanf("%d",&price[i]);

    vector<int> auc;

    ll cnt=0;
    for(i=0;i<m;i++)
    {
        scanf("%d",&k);

        k--;
        auc.push_back(price[k]);
        price[k]=0;
    }

    for(i=0;i<n;i++)
        cnt+=price[i];

    sort(auc.begin(),auc.end(),greater<int>());
    for(i=0;i<auc.size();i++)
    {
        if(auc[i]<cnt)
            cnt*=2;
        else
            cnt+=auc[i];
    }

    printf("%I64d",cnt);

    return 0;
}
