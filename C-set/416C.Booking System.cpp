/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 1100
#define pp pair<int,int>

using namespace std;

struct data
{
    int sz,p,idx;
};

bool cmp(data a, data b)
{
    return a.p>b.p;
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m,x;

    cin>>n;

     data a[n];
    for(i=0;i<n;i++)
        cin>>a[i].sz>>a[i].p, a[i].idx=i+1;

    sort(a,a+n,cmp);

    cin>>k;
    int b[k];

    for(i=0;i<k;i++)
        cin>>b[i];

    int sum=0;
    vector<pp> ans;

    int jdx;
    for(i=0;i<n;i++)
    {
        jdx=-1;
        for(j=0;j<k;j++)
        {
            if(b[j]>=a[i].sz)
            {
                if(jdx==-1)
                    m=b[j], jdx=j;

                else
                {
                    if(b[j]<m)
                        m=b[j], jdx=j;
                }
            }
        }

        if(jdx<0)
            continue;

        sum+=a[i].p;//cout<<a[i].sz<<" "<<b[jdx]<<endl;
        b[jdx]=-107;
        ans.push_back({a[i].idx,jdx+1});
    }

    cout<<ans.size()<<" "<<sum<<endl;
    for(pp e : ans)
        cout<<e.first<<" "<<e.second<<endl;

    return 0;
}
