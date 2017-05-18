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
    ll i,j,k,l;
    ll n;

    cin>>n>>k;

    if(n<k || (n>1 && k<2))
    {
        cout<<"-1";
        return 0;
    }

    char ch[k],ch2='a';
    for(i=0;i<k;i++)
    {
        ch[i]=ch2;ch2++;
    }

    string s;
    i=0;

    //to make lexicographically smaller we shall fill the string with ab then other chars
    i=0;
    while(i<n-k+2 && i<n)
    {
        if(i<n-k+2 && i<n)
        {
            s.push_back('a');
            i++;
        }

        if(i<n-k+2 && i<n)
        {
            s.push_back('b');
            i++;
        }

        else
            break;
    }

    j=2;
    while(i<n)
    {
        s.push_back(ch[j]);
        i++;j++;
    }


    cout<<s;

    return 0;
}
