/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in\n");
#define inf 1000000000000

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    int i,j,k;
    int n;

    cin>>n;
    int a[n],b[n],c[n];
    map<int,bool> mp;

    memset(c,0,sizeof(c));
    for(i=0;i<n;i++)
        cin>>a[i];

    for(i=0;i<n;i++)
    {
        cin>>b[i];

        if(b[i]==a[i])
            c[i]=b[i],mp[c[i]]=1;
    }

    for(i=0;i<n;i++)
    {
        if(!mp[a[i]] && mp[b[i]])
            c[i]=a[i],mp[a[i]]=1;

        else if(mp[a[i]] && !mp[b[i]])
            c[i]=b[i],mp[b[i]]=1;
    }

    for(i=0;i<n;i++)
    {
        if(!c[i])
        {
            if(!mp[a[i]])
                c[i]=a[i],mp[a[i]]=1;

            else if(!mp[b[i]])
                c[i]=b[i],mp[b[i]]=1;
        }
    }

    for(i=0;i<n;i++)
    {
        if(!c[i])
        {
            for(j=1;j<=n;j++)
            {
                if(!mp[j])
                {
                    mp[j]=1;
                    c[i]=j;break;
                }
            }
        }
    }

    for(i=0;i<n;i++)
        cout<<c[i]<<" ";

    return 0;
}
