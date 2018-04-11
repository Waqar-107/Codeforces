

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <sstream>
#include <queue>
#include <stack>
#include <bitset>

#define endl "\n"
#define si(a) scanf("%d",&a)
#define sii(a,b) scanf("%d %d",&a,&b)
#define siii(a,b,c) scanf("%d %d %d",&a,&b,&c)
#define sl(a) scanf("%lld",&a)
#define sll(a,b) scanf("%lld %lld",&a,&b)
#define pf printf
#define vi vector<int>
#define vii vector<pair<int,int> >
#define pii pair<int,int>
#define all(c) c.begin(),c.end()
#define ms(a,c) memset(a,c,sizeof(a))
#define tr(c,i) for(decltype((c).begin()) i=(c).begin();i!=(c).end();i++)
#define trr(c,i) for(decltype((c).rbegin()) i=(c).rbegin();i!=(c).rend();i++)

using namespace std;

#define N 150001
#define mod 1000000007
#define inf 1e9

typedef long long ll;
typedef unsigned long long ull;

ll ok(string t)
{
    ll l=t.length(),k=1,cnt=0;
    for(int i=l-1;i>=0;i--)
    {
        if(t[i]!='#'){
            cnt+=(k*(t[i]-48));
            k*=10;
        }
    }
    
    return cnt;
}

bool check(string t)
{
    bool f=0;
    for(int i=0;i<t.length();i++)
    {
        if(t[i]>'0' && t[i]!='#'){
            return  1;
        }
        
        if(t[i]=='0' && !f)
            return 0;
    }
}

int mx,lmt;
void solve(string t,int koyta,int lvl)
{
    int temp=ok(t);
    int temp2=sqrt(temp);
    
    if(check(t) && temp2*temp2==temp)
    {
        //cout<<t<<" "<<koyta<<endl;
        mx=min(mx,koyta);
        return;
    }
    
    if(lvl>=lmt)
        return;
    
    
    solve(t,koyta,lvl+1);
    t[lvl]='#';
    solve(t,koyta+1,lvl+1);
}

int main()
{
    string s;
    cin>>s;
    
    mx=20;lmt=s.length();
    solve(s,0,0);
    
    if(mx!=20)
        cout<<mx;
    else
        cout<<"-1";
    
    return 0;
}
