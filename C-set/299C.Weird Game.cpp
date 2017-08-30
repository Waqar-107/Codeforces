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
    string s,t;

    cin>>n>>s>>t;

    n=n*2;
    vector<int> y;
    vector<int> a;

    //sort
    string ss[]={"11","10","01","00"};
    for(i=0;i<4;i++)
    {
        for(j=0;j<n;j++)
        {
            if(ss[i][0]==s[j] && ss[i][1]==t[j])
                y.push_back(j);

            if(ss[i][0]==t[j] && ss[i][1]==s[j])
                a.push_back(j);
        }
    }

    bool vis[n];
    memset(vis,0,sizeof(vis));
    string sf,tf;

    j=0;k=0;
    while(j<n && k<n)
    {
        //y
        while(j<n)
        {
            if(!vis[y[j]])
                break;

            j++;
        }

        sf.push_back(s[y[j]]);
        vis[y[j]]=1;j++;

        //a
        while(k<n)
        {
            if(!vis[a[k]])
                break;

            k++;
        }

        tf.push_back(t[a[k]]);
        vis[a[k]]=1;k++;

        if(sf.length()>=n/2 && tf.length()>=n/2)
            break;
    }

    if(sf>tf)
        cout<<"First";

    else if(sf==tf)
        cout<<"Draw";

    else
        cout<<"Second";

    return 0;
}
