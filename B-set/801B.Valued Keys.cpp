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
    string s1,s2,s3;

    cin>>s1>>s2;

    for(i=0;i<s1.length();i++)
    {
        if(s1[i]==s2[i])
            s3.push_back(s1[i]);

        else if(s1[i]>s2[i])
            s3.push_back(min(s1[i],s2[i]));

        else
        {
            cout<<"-1";
            return 0;
        }
    }

    cout<<s3;

    cin.clear();
    cin.ignore();
    //cin.get();

    return 0;
}
