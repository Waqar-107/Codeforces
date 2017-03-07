/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<string,ll>
#define dbg printf("f");
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
    ll n;
    char ch;
    string a;
    map<string,ll> mp;


    cin>>n;
    ll lagbe;
    for(j=0;j<n;j++)
    {
        string s;
        cin>>ch>>a;

        lagbe=18-a.length();
        for(i=0;i<lagbe;i++)
            s.push_back('0');

        k=0;
        for(i=lagbe;i<=18;i++)
        {
            if((a[k]-48)%2==0)
                s.push_back('0');
            else
                s.push_back('1');

            k++;
        }


        if(ch=='+')
            mp[s]++;

        else if(ch=='-')
            mp[s]--;

        else
            cout<<mp[s]<<endl;

    }

    return 0;
}
