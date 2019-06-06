/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1000100
#define inf 1e18

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
#define pp pair<int, int>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;

    ll x = 0, ov;
    string s;
    stack<ll> stk;

    //2 ^ 32 - 1
    ov = 4294967295;

    sf(n);

    pp a[n];
    int mp[n], kaz[n];
    stack<int> idx;
    queue<int> q;

    for(i = 0; i < n; i++)
    {
        cin >> s;

        if(s == "for")
        {
            sf(m);
            a[i] = {1, m};
            idx.push(i);
        }

        else if(s == "end")
        {
            a[i] = {2, -1};
            mp[idx.top()] = i;
            idx.pop();
        }

        else
            a[i] = {3, -1}, q.push(i);
    }

    for(i = 0; i < n; i++)
    {
        while(q.size())
        {
            if(q.front() < i)
                q.pop();
            else
                break;
        }

        if(a[i].first == 1)
        {
            if(!q.empty() && q.front() > i && q.front() < mp[i])
                kaz[i] = 1, kaz[mp[i]] = 1;

            else
                kaz[i] = 0, kaz[mp[i]] = 0;
        }
    }

    for(i = 0; i < n; i++)
    {
        if(a[i].first == 3)
        {
            if(stk.empty())
                x++;
            else
                x += stk.top();
        }

        else if(a[i].first == 1)
        {
            m = a[i].second;
            if(stk.empty())
            {
                if(kaz[i])
                    stk.push(m);
            }

            else
            {
                if(kaz[i])
                    stk.push(m * stk.top());
            }

            if(stk.size() && stk.top() > ov)
            {
                pfs("OVERFLOW!!!");
                return 0;
            }
        }

        else
        {
            if(stk.size() && kaz[i])
                stk.pop();
        }

        if(x > ov){
            pfs("OVERFLOW!!!");
            return 0;
        }
    }

    pfl(x);

    return 0;
}
