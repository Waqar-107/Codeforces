/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 101010
#define inf 1e9

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
#define pp pair<int,int>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, pending;
    int curr, mx, cnt;
    string s;

    cin >> s;
    stack<int> stk;

    n = s.length();
    bool flag[n] = { false };
    curr = 0, mx = 0, cnt = 0;

    for(i = 0; i < n; i++)
    {
        if(s[i] == '(')
            stk.push(i);

        else
        {
            if(stk.size())
                flag[i] = true, flag[stk.top()] = true, stk.pop();
        }
    }

    curr = 0;
    for(i = 0; i < n; i++)
    {
        if(flag[i])
            curr++;

        else
        {
            if(curr > mx)
                cnt = 1;
            else if(curr && curr == mx)
                cnt++;

            mx = max(mx, curr);
            curr = 0;
        }
    }

    if(curr > mx)
        cnt = 1;
    else if(curr && curr == mx)
        cnt++;

    mx = max(mx, curr);
    cnt = max(cnt, 1);

    cout << mx << " " << cnt <<endl;

    return 0;
}
