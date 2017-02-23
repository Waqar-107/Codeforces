/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<string,ll>
#define dbg printf("xxxx");
#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    ll i,j,k;
    ll n,e,m;
    priority_queue<ll> pq;
    vector<pp> action;
    string s;

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s;

        //insert
        if(s=="insert")
        {
            cin>>e; pq.push(-e);
            action.push_back(make_pair(s,e));
        }

        //minimum
        else if(s=="getMin")
        {
            cin>>e;

            if(!pq.empty())
            {
                while(pq.size()!=0 && -pq.top()<e)
                {
                    pq.pop(); action.push_back(make_pair("removeMin",-1));
                }

                if(pq.size()==0 || -pq.top()>e)
                {
                    pq.push(-e);action.push_back(make_pair("insert",e));
                }

                action.push_back(make_pair("getMin",e));
            }

            else
            {
                pq.push(-e);action.push_back(make_pair("insert",e));
                action.push_back(make_pair("getMin",e));
            }

        }

        //remove
        else
        {
            if(pq.size()==0)
            {
                action.push_back(make_pair("insert",0));
            }

            else
                pq.pop();

            action.push_back(make_pair(s,-1));
        }

    }

    cout<<action.size()<<endl;
    for(i=0;i<action.size();i++)
    {
        if(action[i].first=="removeMin")
            cout<<action[i].first<<endl;
        else
            cout<<action[i].first<<" "<<action[i].second<<endl;
    }


    return 0;
}
