/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 150
#define inf 100000000
#define pp pair<int,int>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

bool cmp(pp a, pp b)
{
    return a.first<b.first;
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m,v;

    sff(n,v);

    vector<pp> catamaran, kayak;
    for(i=0;i<n;i++)
    {
        sff(m,k);

        if(m==1)
            kayak.pb({k,i+1});
        else
            catamaran.pb({k,i+1});
    }

    sort(kayak.begin(),kayak.end(),cmp);
    sort(catamaran.begin(),catamaran.end(),cmp);

    vector<int> vec;
    int ans=0;

    while(v)
    {
        //try a kayak
        if(v==1)
        {
            if(kayak.size())
            {
                ans+=kayak.back().first;
                vec.pb(kayak.back().second);
                kayak.pop_back();
                v--;
            }

            else
                break;
        }

        else
        {
            if(kayak.size()>=2 && catamaran.size()>=1)
            {
                k=kayak.size()-1;
                if(kayak[k].first+kayak[k-1].first>catamaran.back().first)
                {
                    ans+=(kayak[k].first);
                    v--;

                    vec.pb(kayak[k].second); kayak.pop_back();
                }

                else
                {
                    ans+=catamaran.back().first;
                    v-=2;
                    vec.pb(catamaran.back().second); catamaran.pop_back();
                }
            }

            else if(kayak.size()>0 && catamaran.size()==0)
            {
                ans+=kayak.back().first; vec.pb(kayak.back().second); kayak.pop_back();
                v--;
            }

            else if(kayak.size()==1 && !catamaran.empty())
            {
                if(kayak[0].first>catamaran.back().first)
                {
                    ans+=kayak.back().first; vec.pb(kayak.back().second); kayak.pop_back();
                    v--;
                }

                else
                {
                    ans+=catamaran.back().first; vec.pb(catamaran.back().second); catamaran.pop_back();
                    v-=2;
                }
            }

            else if(kayak.size()==0 && catamaran.size()>0)
            {
                 ans+=catamaran.back().first; vec.pb(catamaran.back().second); catamaran.pop_back();
                v-=2;
            }

            else
                break;
        }

        //cout<<ans<<" "<<vec.back()<<"  "<<v;nl
    }

    pf(ans); nl

    for(int e : vec)
        pf(e);

    return 0;
}
