/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 10
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
#define pp pair<int, int>

using namespace std;

ull checkBit(ll num, int pos) {
    return num & (1ULL << (pos - 1 ));
}

ull setBit(ll num, int pos){
    return num | (1ULL << (pos - 1));
}

ull resetBit(ll num, int pos) {
    return num & ~(1ULL << (pos - 1));
}

int main()
{
    // freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;
    ull x, y;
    ull l, r, l2, r2, ans = 0;

    cin >> l >> r;

    n = 60;
    for(i = n; i > 0; i--)
    {
        x = checkBit(l, i);
        y = checkBit(r, i);

        if(x != y)
            ans |= setBit(ans, i);

        else
        {
            // both are 0
            if(!x && !y)
            {
                l2 = setBit(l, i);
                r2 = setBit(r, i);

                if(l <= l2 && l2 <= r)
                    l = l2, ans |= setBit(ans, i);

                else if(l <= r2 && r2 <= r)
                    r = r2, ans |= setBit(ans, i);
            }

            else
            {
                l2 = resetBit(l, i);
                r2 = resetBit(r, i);

                if(l <= l2 && l2 <= r)
                    l = l2, ans |= setBit(ans, i);

                else if(l <= r2 && r2 <= r)
                    r = r2, ans |= setBit(ans, i);
            }
        }
    }
    
    cout << ans;

    return 0;
}
