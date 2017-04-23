/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<ll,ll>
#define dbg printf("xxxx");
#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    ll i,j,k;
    bool automation=false;
    string a,b;
    map<char,ll> xb;map<char,ll> xa;


    cin>>a>>b;
    string ba,bb,cc;


    //array
    ba=a;bb=b;
    sort(ba.begin(),ba.end());
    sort(bb.begin(),bb.end());

    if(ba==bb)
    {
        cout<<"array";
        return 0;
    }


    //automation
    j=0;
    for(i=0;i<a.length();i++)
    {
        if(j==b.length())
            break;

        if(a[i]==b[j])
        {
            cc.push_back(a[i]);
            j++;
        }
    }
//cout<<cc<<endl;
    if(cc==b)
    {
        cout<<"automaton";return 0;
    }


    //if automation is false, there might be a chance to be the answer to be both
    ba="";bb=b;
    for(i=0;i<b.length();i++)
        xb[b[i]]++;

    for(i=0;i<a.length();i++)
        xa[a[i]]++;

    bool f=true;
    map<char,ll>::iterator p=xb.begin();
    while(p!=xb.end())
    {
        if(xa[p->first]<p->second)
        {
            f=false;
            break;
        }

        p++;
    }

    if(f)
    {
        cout<<"both";
        return 0;
    }

    cout<<"need tree";

    return 0;
}
