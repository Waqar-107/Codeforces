/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 40101
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
    int n, m, t;
    int x, y;

    sf(t);
    while (t--)
    {
        sf(n);
        int done[n];
        string a[n], temp, temp2;

        for(i = 0; i < n; i++)
            cin >> a[i];

        int ans = 0;

        set<string> db;

        db.insert(a[0]);
        done[0] = 1;
        for(i = 1; i < n; i++)
        {
            if(db.find(a[i]) == db.end())
                db.insert(a[i]), done[i] = 1;

            else
                done[i] = 0;
        }

        for(i = 0; i < n; i++)
        {
            if(done[i])
                continue;

            // changing a single char would be enough as there will be at-most 10 numbers
            temp = a[i];
            for(j = 0; j <= 9; j++)
            {
                temp[0] = j + '0';
                if(db.find(temp) == db.end())
                {
                    db.insert(temp);
                    ans++;
                    a[i] = temp;
                    break;
                }
            }
        }

        pf(ans), nl;
        for(i = 0; i < n; i++)
            cout << a[i] << endl;
    }

    return 0;
}
