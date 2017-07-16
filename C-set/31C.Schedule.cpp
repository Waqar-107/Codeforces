/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<int,int>
#define dbg printf("in\n");
#define NL printf("\n");

#define inf 1000000000000

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    int i,j,k;
    int n,l,r;
    bool f;

    cin>>n;
    pair<pp,int> a[n];

    for(i=0;i<n;i++)
    {
        cin>>l>>r;
        a[i]={{l,r},i+1};
    }

    sort(a,a+n);

    vector<pair<pp,int>> temp;
    vector<int> v;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j!=i)
                temp.push_back(a[j]);
        }

        f=true;
        for(j=1;j<temp.size();j++)
        {
            if(temp[j].first.first<temp[j-1].first.second)
            {
                f=false;break;
            }
        }

        if(f)
            v.push_back(a[i].second);

        temp.clear();
    }

    sort(v.begin(),v.end());

    cout<<v.size()<<endl;
    for(i=0;i<v.size();i++)
        cout<<v[i]<<" ";


    return 0;
}
