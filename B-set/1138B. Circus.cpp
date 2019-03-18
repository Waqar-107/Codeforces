/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 510
#define inf 1e6

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
    int n, m, x, y;
    int t1, t2;
    int a, c;
    int clown = 0, acrobat = 0, none = 0, both = 0;

    sf(n);

    string s, t;
    cin >> s >> t;

    for(i = 0; i < n; i++)
    {
        if(s[i] == '1' && t[i] == '1')
            both++;

        else if(s[i] == '0' && t[i] == '0')
            none++;

        else if(s[i] == '1' && t[i] == '0')
            clown++;

        else
            acrobat++;
    }

    for(i = 0; i <= clown; i++)
    {
        for(j = 0; j <= both; j++)
        {//cout<<i<<" "<<j;nl;
            //total clown in 1
            x = i + j;

            //men that will perform as acrobats in 2
            y = both - j;

            if(x < y)
                continue;

            //clown != acrobat
            if(acrobat + y < x)
                continue;

            //acrobats left
            a = acrobat - (x - y);
            y += (x - y);

            //clowns left
            c = clown - i;
//cout<<x<<" "<<y<<" "<<a<<" "<<c;nl;
            // add the rest of the clowns in 2, and acrobats in 1
            t1 = x + a;
            t2 = c + y;

            m = n - t1 - t2;

            if(m == none && t1 <= n / 2 && t2 <= n / 2)
            {
                clown = i;
                acrobat = a;
                none = max(n / 2 - t1, 0);
                both = j;

                //none
                for(k = 0; k < n; k++)
                {
                    if(!none)
                        break;
                    if(s[k] == '0' && t[k] == '0')
                        pf(k + 1), pfs(" "), none--;
                }

                //clown
                for(k = 0; k < n; k++)
                {
                    if(!clown)
                        break;
                    if(s[k] == '1' && t[k] == '0')
                        pf(k + 1), pfs(" "), clown--;
                }

                //acrobat
                for(k = 0; k < n; k++)
                {
                    if(!acrobat)
                        break;
                    if(s[k] == '0' && t[k] == '1')
                        pf(k + 1), pfs(" "), acrobat--;
                }

                //both
                for(k = 0; k < n; k++)
                {
                    if(!both)
                        break;
                    if(s[k] == '1' && t[k] == '1')
                        pf(k + 1), pfs(" "), both--;
                }

                return 0;
            }
        }
    }

    pf(-1);

    return 0;
}
