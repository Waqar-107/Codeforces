/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<ll,ll>
#define ppp pair<ll,pp>
#define dbg printf("x");
#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
    int i,j,k;
    int l,r,idx;
    string s;

    cin>>s>>k;

    for(i=0;i<s.length();i++)
    {
        r=s[i];
        idx=-1;
        for(j=i+1;j<s.length();j++)
        {
            if(r<s[j])
            {
                if(k>=(j-i))
                {
                    r=s[j];idx=j;
                }
            }
        }

        if(idx!=-1)
        {
            for(j=idx;j>i;j--)
                swap(s[j],s[j-1]);

            k-=(idx-i);
        }
    }

    cout<<s;

    return 0;
}

