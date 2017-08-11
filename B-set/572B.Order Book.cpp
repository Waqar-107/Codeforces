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
    int n,m,s;
    int p,q;
    char ch;

    cin>>n>>s;

    map<int,int> buy;
    map<int,int> sell;

    for(i=0;i<n;i++)
    {
        cin>>ch>>p>>q;

        if(ch=='B')
            buy[p]+=q;
        else
            sell[p]+=q;
    }

    vector<pp> vb;
    vector<pp> vs;

    map<int,int>:: iterator it1=buy.begin();
    while(it1!=buy.end())
    {
        vb.push_back({it1->first,it1->second});
        it1++;
    }

    it1=sell.begin();
    while(it1!=sell.end())
    {
        vs.push_back({it1->first,it1->second});
        it1++;
    }

    //aggregate- buy order- sort in decreasing
    //sell order-ascending
    sort(vs.begin(),vs.end());
    sort(vb.begin(),vb.end(),greater<pp>());

    //throw the extras
    while(vs.size()>s)
        vs.pop_back();

    while(vb.size()>s)
        vb.pop_back();

    sort(vs.begin(),vs.end(),greater<pp>());

    k=s;i=0;
    while(k && i<vs.size() )
    {
        cout<<"S "<<vs[i].first<<" "<<vs[i].second<<endl;
        i++;k--;
    }

    i=0;
    while(s && i<vb.size())
    {
        cout<<"B "<<vb[i].first<<" "<<vb[i].second<<endl;
        s--;i++;
    }

    return 0;
}
