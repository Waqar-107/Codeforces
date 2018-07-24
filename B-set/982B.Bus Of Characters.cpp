/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 150

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back

using namespace std;

struct seat
{
    int idx, width;

    seat(){}
    seat(int idx,int width)
    {
        this->idx=idx;
        this->width=width;
    }
};

class intro
{
public:
    bool operator()(seat a, seat b){
        return a.width>b.width;
    }
};

class extro
{
public:
    bool operator()(seat a, seat b){
        return a.width<b.width;
    }
};

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;

    sf(n);

    int w[n];
    priority_queue<seat,vector<seat>,intro> introvert;
    priority_queue<seat,vector<seat>,extro> extrovert;

    for(i=0;i<n;i++)
    {
        sf(w[i]);
        introvert.push(seat(i+1,w[i]));
    }

    string s;
    cin>>s;

    n*=2;
    for(i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            pf(introvert.top().idx);
            extrovert.push(introvert.top());
            introvert.pop();
        }

        else
        {
            pf(extrovert.top().idx);
            extrovert.pop();
        }
    }

    return 0;
}
