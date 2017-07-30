/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>
typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define inf 1000000000
#define pp pair<int,int>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,m;
    string s;

    cin>>n>>k;

    ll st[26],fin[26];

    cin>>s;

    for(i=0;i<26;i++)
        st[i]=inf,fin[i]=0;


    for(i=0;i<n;i++)
    {
        st[s[i]-'A']=min(st[s[i]-'A'],i);
        fin[s[i]-'A']=max(fin[s[i]-'A'],i);
    }

    ll ck=k;
    for(i=0;i<n;i++)
    {
        //only once
        if(st[s[i]-'A']==fin[s[i]-'A'])
        {
            if(ck<=0)
            {
                cout<<"YES";
                return 0;
            }

            continue;
        }

        //start
        if(st[s[i]-'A']==i)
        {
            if(ck<=0)
            {
                cout<<"YES";
                return 0;
            }

            ck--;
        }

        //end
        else if(fin[s[i]-'A']==i)
        {
            ck++;
        }
    }

    cout<<"NO";

    return 0;
}
