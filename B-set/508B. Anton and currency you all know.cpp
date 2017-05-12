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
    int i,j,k;
    string s;

    cin>>s;

    j=-1;
    char ch=s[s.length()-1];

    for(i=s.length()-1;i>=0;i--)
    {
        if((s[i]-48)&1)
            continue;
        else
        {
            if(j==-1)
                j=i;
            else
            {
                if(s[i]<ch)
                    j=i;
            }
        }
    }

    if(j==-1)
        cout<<j;
    else
    {
        swap(s[j],s[s.length()-1]);
        cout<<s;
    }

    return 0;
}
