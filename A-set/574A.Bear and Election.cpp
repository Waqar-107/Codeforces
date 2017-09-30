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
    int n,m,x;
    int cnt=0;

    cin>>n;
    priority_queue<int> pq;

    cin>>x;
    for(i=2;i<=n;i++)
    {
        cin>>m;
        pq.push(m);
    }

    while(x<=pq.top())
    {
        m=pq.top();
        pq.pop();

        x++;
        pq.push(m-1);

        cnt++;

    }

    cout<<cnt;

    return 0;
}
