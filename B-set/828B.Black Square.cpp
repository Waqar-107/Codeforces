/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in\n");
#define NL printf("\n");

#define inf 1000000000000

using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    ll i,j,k;
    ll n,m,h;

    cin>>n>>m;
    string s[n];

    for(i=0;i<n;i++)
        cin>>s[i];

    ll w=0,b=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(s[i][j]=='W')
                w++;
            else
                b++;
        }
    }

    //all black or white or only one black
    if(w==(n*m))
    {
        cout<<"1";
        return 0;
    }

    if(b==(n*m))
    {
        if(n==m)
            cout<<"0";
        else
            cout<<"-1";

        return 0;
    }

    if(b==1)
    {
        cout<<"0";
        return 0;
    }


    ll minX=inf,maxX=0,maxY=0,minY=inf;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(s[i][j]=='B')
            {
                minX=min(j,minX);
                maxX=max(maxX,j);
                minY=min(minY,i);
                maxY=max(maxY,i);
            }
        }
    }

    j=maxX-minX+1;
    k=maxY-minY+1;

    //cout<<maxX<<" "<<maxY<<" "<<minX<<" "<<minY<<endl;

    i=max(j,k);

    //cout<<i<<endl;
    if(i>n || i>m)
        cout<<"-1";
    else
    {
        if(b>=i*i)
            cout<<"0";
        else
            cout<<(i*i-b);
    }


    return 0;
}
