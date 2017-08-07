/***from dust i have come, dust i will be***/

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
    int n,m,r;
    int a,b,c;
    int x,y;

    cin>>n>>a>>b;

    vector<pp> v;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;

        if(x<=a && y<=b)
        {
            v.push_back({x,y});
            continue;
        }

        else if(y<=a && x<=b)
        {
            v.push_back({x,y});
        }
    }
    
    if(v.size()==0)
    {
        cout<<"0";
        return 0;
    }

    m=0;
    for(i=0;i<v.size()-1;i++)
    {
        for(j=i+1;j<v.size();j++)
        {
            k=(v[i].first*v[i].second)+(v[j].first*v[j].second);

            //keep v[i] as it is
            r=a;c=b-v[i].second;
            if(v[i].first<=a && v[i].second<=b && r>=0 && c>=0 && ((v[j].first<=r && v[j].second<=c) || (v[j].first<=c && v[j].second<=r)))
                m=max(m,k);

            r=a-v[i].first;c=b;
            if(v[i].first<=a && v[i].second<=b && r>=0 && c>=0 && ((v[j].first<=r && v[j].second<=c) || (v[j].first<=c && v[j].second<=r)))
                m=max(m,k);

            //rotate
            r=a;c=b-v[i].first;
            if(v[i].first<=b && v[i].second<=a && r>=0 && c>=0 && ((v[j].first<=r && v[j].second<=c) || (v[j].first<=c && v[j].second<=r)))
                m=max(m,k);

            r=a-v[i].second;c=b;
            if(v[i].first<=b && v[i].second<=a && r>=0 && c>=0 && ((v[j].first<=r && v[j].second<=c) || (v[j].first<=c && v[j].second<=r)))
                m=max(m,k);

        }
    }

    cout<<m;

    return 0;
}
