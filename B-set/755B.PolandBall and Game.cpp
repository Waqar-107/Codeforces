/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<ll,ll>
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
        ll n,m;
        string s;
        set<string> ss;

        cin>>n>>m;
        for(i=0;i<n+m;i++)
        {
            cin>>s;
            ss.insert(s);
        }

        //n+m=total word, size of set=distinct word
        //there are commons
        if(n+m-ss.size()>0)
        {
            ll com=n+m-ss.size();
            n-=com;m-=com;

            if(com%2==1)
            {
                n+=(com)/2+1;
                m+=(com)/2;
            }

            else
            {
                n+=(com)/2;
                m+=(com)/2;
            }
        }

        if(n>m)
            cout<<"YES";
        else
            cout<<"NO";


        return 0;
}
