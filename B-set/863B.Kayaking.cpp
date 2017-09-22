#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,int>
#define inf 99999

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k;
    int n,m,sum;

    cin>>n;
    n=n*2;

    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];

    m=inf;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            sum=0;
            vector<int> v;
            for(k=0;k<n;k++)
            {
                if(k!=j && k!=i)
                    v.push_back(a[k]);
            }

            sort(v.begin(),v.end());
            for(k=0;k<v.size();k+=2)
                sum+=(v[k+1]-v[k]);

            m=min(m,sum);
        }
    }

    cout<<m;

    return 0;
}
