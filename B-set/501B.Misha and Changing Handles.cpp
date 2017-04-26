/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in");
#define NL printf("\n");
#define pi 3.1416

#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();

    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n;
    string s1,s2,temp;
    map<string,string> mp;
    map<string,bool> dp;

    cin>>n;
    map<string,string>::iterator p;
    for(i=0;i<n;i++)
    {
       cin>>s1>>s2;

       if(dp[s1])
       {
            temp=mp[s1];//cout<<temp<<endl;
            dp[s1]=false;
            p=mp.find(s1);
            mp.erase(p);

            mp[s2]=temp;dp[s2]=true;
       }

       else
       {
            mp[s2]=s1;//cout<<s1<<" dddd"<<endl;
            dp[s2]=true;
       }
    }

    cout<<mp.size()<<endl;
    p=mp.begin();
    while(p!=mp.end())
    {
        cout<<p->second<<" "<<p->first<<endl;
        p++;
    }


    cin.clear();
    cin.ignore();
    //cin.get();

    return 0;
}
