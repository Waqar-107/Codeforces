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

    ll i,j,k;
    ll n,t;
    ll t1,t2;
    string s1,s2,a;

    cin>>n>>t;
    cin>>s1>>s2;

    k=n;
    t1=n-t;t2=n-t;

    for(i=0;i<n;i++)
        a.push_back('#');

    //use the equal ones first
    i=0;
    while(i<n && t1>0 && t2>0)
    {
        if(s1[i]==s2[i])
            a[i]=s1[i],t1--,t2--,k--;

        i++;
    }

    //match with s1 an s2 individually
    i=0;
    while(t1 && k)
    {
        if(a[i]=='#')
            a[i]=s1[i],t1--,k--;

        i++;
    }

    i=0;
    while(t2 && k)
    {
        if(a[i]=='#')
            a[i]=s2[i],t2--,k--;

        i++;
    }

    //fill the rest of the third string with chars that matches with neither of the first two
    for(i=0;i<n;i++)
    {
        if(a[i]=='#' && k)
        {
            for(j='a';j<='z';j++)
            {
                if(s1[i]!=j && s2[i]!=j)
                {
                    a[i]=j;break;
                }
            }
        }
    }

    //final check if the 3rd string differ by t
    t1=0,t2=0;

    for(i=0;i<n;i++)
    {
        if(a[i]!=s1[i])
            t1++;

        if(a[i]!=s2[i])
            t2++;
    }

    if(t==t1 && t==t2)
        cout<<a;

    else
        cout<<"-1";

    return 0;
}
