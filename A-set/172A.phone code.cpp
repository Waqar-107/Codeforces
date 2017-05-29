#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<char,int>

#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
        ll i,j,k;
        ll n,count=0;
        bool flag=true;

        cin>>n;
        string a[n];

        for(i=0;i<n;i++)
            cin>>a[i];

        ll l=a[0].length();

        for(i=0;i<l;i++)
        {
            for(j=0;j<n-1;j++)
            {
                if(a[j][i]==a[j+1][i])
                    continue;
                else
                {
                    flag=false;
                    break;
                }
            }

            if(flag==true)
                count++;
            else
                break;
        }

        cout<<count;

        return 0;
}
