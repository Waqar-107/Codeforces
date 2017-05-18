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
    //freopen("in.txt","r",stdin);
    ll i,j,k;
    ll n;

    string s,t;

    cin>>s>>t;

    i=0;
    while(s[i]!='|')
    {
        i++;
    }

    ll left=i;
    ll right=s.length()-i-1;

    j=abs(right-left);
    if((j==0 && t.length()%2==0) || (j!=0 && t.length()>=j && (t.length()-j)%2==0))
    {
        string s2;
        for(i=0;i<left;i++)
            s2.push_back(s[i]);

        n=t.length()+s.length()-1;
        k=0;
        while(i<n/2)
        {
            s2.push_back(t[k]);
            k++;i++;
        }

        s2.push_back('|');i++;

        for(i=left+1;i<s.length();i++)
            s2.push_back(s[i]);

        while(i<=n && k<t.length())
        {
            s2.push_back(t[k]);
            k++;i++;
        }

        cout<<s2;
    }

    else
        cout<<"Impossible";

    return 0;
}
