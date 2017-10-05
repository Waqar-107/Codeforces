#include<bits/stdc++.h>

#define dbg printf("in\n");
#define nl printf("\n");

using namespace std;

int main()
{
   // freopen("in.txt","r",stdin);

    int i,j,k;
    int n;
    string p;

    cin>>p>>n;

    string s[n];
    for(i=0;i<n;i++)
    {
        cin>>s[i];

        if(s[i]==p)
        {
            cout<<"YES";
            return 0;
        }
    }

    k=1;
    for(i=0;i<n;i++)
    {
        if(s[i][1]==p[0])
        {
            k=0;break;
        }
    }

    if(k)
    {
        cout<<"NO";
        return 0;
    }

    for(i=0;i<n;i++)
    {
        if(p[1]==s[i][0])
        {
            cout<<"YES";
            return 0;
        }
    }

    cout<<"NO";

    return 0;
}
