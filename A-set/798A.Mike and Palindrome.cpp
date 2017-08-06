/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,int>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k;
    int n;
    string s;

    cin>>s;
    n=s.length();

    if(n%2==0)
    {
        j=n-1;k=0;
        for(i=0;i<n/2;i++)
        {
            if(s[i]!=s[j])
                k++;

            j--;
        }

        if(k==1)
            cout<<"YES";
        else
            cout<<"NO";
    }

    else
    {
        j=n-1;k=0;
        for(i=0;i<n/2;i++,j--)
        {
            if(s[i]!=s[j])
                k++;
        }

        if(k<=1)
            cout<<"YES";
        else
            cout<<"NO";
    }

    return 0;
}
