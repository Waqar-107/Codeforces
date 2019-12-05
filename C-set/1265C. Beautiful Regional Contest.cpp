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

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;

    sf(t);
    while(t--)
    {
        sf(n);

        int a[n];
        map<int, int> mp;
        for(i = 0; i < n; i++)
            sf(a[i]), mp[a[i]]++;

        int g = 0, s = 0, b = 0;

        // assign golds
        g++; k = n;
        for(i = 1; i < n; i++)
        {
            if(a[i] == a[0]) g++;
            else {
                k = i;
                break;
            }
        }

        // give silver
        j = k; k = n;
        int point = -1;
        for(i = j; i < n; i++)
        {
            if(a[j] == a[i]) s++, point = a[i];
            else if(s <= g) s++, point = a[i];
            else
            {
                k = i;
                break;
            }
        }

        j = k; k = n;
        for(i = j; i < n; i++)
        {
            if(a[i] == point) s++;
            else
            {
                k = i;
                break;
            }
        }

        // now give bronze
        j = k; k = n; point = -1;
        for(i = j; i < n; i++)
        {
            if(!b || b <= g)b++, point = a[i];
            else {
                k = i;
                break;
            }
        }

        j = k; k = n;
        for(i = j; i < n; i++)
        {
            if(point == a[i]) b++;
            else {
                k = i;
                break;
            }
        }

        // maximize
        for(i = 0; i < k; i++)
            mp[a[i]]--;

        for(i = k; i < n; i++)
        {
            if(g + b + s + mp[a[i]] <= n / 2)
                b++, mp[a[i]]--;
            else break;
        }

        if(g && s && b && g + s + b <= n / 2 && g < s && g < b)
            cout << g << " " << s << " " << b << endl;
        else
            cout << "0 0 0\n";
    }


    return 0;
}
