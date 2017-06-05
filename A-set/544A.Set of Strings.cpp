/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in\n");
#define inf 1000000000000

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    int i,j,k;
    int n;
    string s,t;

    cin>>n>>s;
    map<char,bool> mp;

    bool f=false;
    vector<string> v;
    for(i=0;i<s.length();i++)
    {
        //append to the current string
        if(v.size()==n-1)
        {
            t.push_back(s[i]);
        }

        else
        {
            if(!mp[s[i]])
            {
                if(t.size())
                    v.push_back(t);

                t.clear();
                t.push_back(s[i]);
                mp[s[i]]=1;
            }

            else
                t.push_back(s[i]);
        }
    }

    if(t.size())
        v.push_back(t);

    if(v.size()==n)
    {
        cout<<"YES"<<endl;
        for(i=0;i<v.size();i++)
            cout<<v[i]<<endl;
    }

    else
        cout<<"NO"<<endl;

    return 0;
}
