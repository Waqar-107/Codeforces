#include<bits/stdc++.h>
typedef long long int ll;
#define pair<ll,ll> pii
using namespace std;
int main()
{
        ll i,j,k;
        ll n;
        string name,type,captain;
        vector<string> woman;
        vector<string> man;
        vector<string> rat;


        cin>>n;

        for(i=1;i<=n;i++)
        {
            cin>>name>>type;

            if(type=="captain")
                captain=name;

            else if(type=="rat")
                rat.push_back(name);

            else if(type=="woman")
                woman.push_back(name);

            else if(type=="child")
                woman.push_back(name);

            else if(type=="man")
                man.push_back(name);

        }


        for(i=0;i<rat.size();i++)
            cout<<rat[i]<<endl;

        for(i=0;i<woman.size();i++)
            cout<<woman[i]<<endl;

        for(i=0;i<man.size();i++)
            cout<<man[i]<<endl;

        cout<<captain<<endl;

        return 0;
}
