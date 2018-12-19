/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 100100

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<string,int>

using namespace std;

bool cmp(pp a,pp b){
    return a.first.length()<b.first.length();
}

int main()
{
    //freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m,t;

    sf(n);

    if(n==2)
    {
        pfs("PS\n");
        return 0;
    }

    n=2*n-2;
    pp a[n];
    string x,y;

    for(i=0;i<n;i++)
        cin>>x, a[i]={x,i};

    sort(a,a+n,cmp);
    map<int,int> mp;

    int ans[n];
    memset(ans,0,sizeof(ans));

    k=-1;m=0;
    for(i=n-1;i>=0;i-=2)
    {
        x=a[i].first;
        y=a[i-1].first;

        if(x==y)
        {
            ans[a[i].second]=1;
            ans[a[i-1].second]=2;
            m+=2;
        }

        else
        {
            k=i;
            break;
        }
    }

    //if k is -1 then all are equal
    if(k!=-1)
    {
        string pref=x, suff=y;
        int cnt1=0, cnt2=0;

        //x and y konta re ki dhorle valo hoy check dao
        while(x.length()>=1)
        {
            for(i=0;i<n;i++)
            {
                if(!ans[a[i].second] && !mp[a[i].second] && a[i].first==x){
                    mp[a[i].second]=1;
                    cnt1++;
                    break;
                }
            }

            x.pop_back();
        }

        while(y.length()>=1)
        {
            for(i=0;i<n;i++)
            {
                if(!ans[a[i].second] && !mp[a[i].second] && a[i].first==y){
                    mp[a[i].second]=1;
                    cnt2++;
                    break;
                }
            }

            y=y.substr(1,y.length()-1);
        }

        //then y is pref
        if(cnt1!=cnt2 || (n-m)/2 != cnt1 || (n-m)/2 != cnt2)
            swap(pref,suff);

        //cout<<pref<<" "<<suff;nl;
        while(pref.length()>=1)
        {
            //cout<<pref<<endl;
            for(i=0;i<n;i++)
            {
                if(!ans[a[i].second] && a[i].first==pref){
                    ans[a[i].second]=1;
                    //cout<<"i : "<<a[i].second;nl;
                    break;
                }
            }

            pref.pop_back();
        }
    }

    for(i=0;i<n;i++)
    {
        if(ans[i]==1)
            pfs("P");
        else
            pfs("S");
    }

    return 0;
}
