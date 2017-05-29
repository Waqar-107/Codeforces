/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in");
#define NL printf("\n");

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
    ll a,n;
    string s,t;

    getline(cin,t);

    n=t.length();
    a=0;
    for(i=0;i<n;i++)
    {
        if(isalpha(t[i]))
        {
            s.push_back(t[i]);
            a=0;
        }

        else if(t[i]==' ' && a==0)
        {
            s.push_back(' ');
            a=1;
        }

        else if(t[i]=='.' || t[i]==',' || t[i]=='?' || t[i]==';' || t[i]==':' || t[i]=='"' || t[i]=='!')
        {
            if(a==1)
                s.pop_back();

            s.push_back(t[i]);
            s.push_back(' ');
            a=1;
        }
    }

    cout<<s;

    cin.clear();
    cin.ignore();
    //cin.get();

    return 0;
}
