/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in");
#define NL printf("\n");

#define inf 1000000000000

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k,l;
    ll n;

    cin>>n;
    ll x[n];

    deque<ll> q;map<ll,ll> mp;
    for(i=0;i<n;i++)
        cin>>x[i];


    sort(x,x+n);


    for(i=0;i<n;i++)
        q.push_back(x[i]),mp[x[i]]++;


    ll a,b,count=0;
    a=q.front();q.pop_front();

    i=0;
    while(!q.empty())
    {
        if(mp[a]==q.size()+1)
            break;


        b=q.front();

        //cout<<q.size()<<endl;
        //cout<<a<<" "<<b<<endl;

        if(a<b)
        {
            mp[a]--;
            a=b;
            count++;q.pop_front();
        }

        else if(a==b)
        {
            q.pop_front();
            q.push_back(b);
        }

        else if(a>b)
        {
            mp[a]--;
            a=b;
            q.pop_front();
        }
    }

    cout<<count;

    return 0;
}
