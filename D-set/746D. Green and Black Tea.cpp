/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 201010
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
    // freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, a, b;

    sff(n, k);
    sff(a, b);

    string s;
    int last = 0;
    char ch = '#';

    for(i = 0; i < n; i++)
    {
        // cout<<last<<" "<<s<<" "<<ch;nl;
        if(last < k)
        {
            if(a >= b)
            {
                if(ch == 'G')
                    last++;
                else
                    last = 1;

                s.pb('G');
                ch = 'G';
                a--;
            }

            else
            {
                if(ch == 'B')
                    last++;
                else
                    last = 1;

                ch = 'B';
                s.pb('B');
                b--;
            }
        }

        else
        {
            last = 1;
            if(ch == 'G')
            {
                if(b <= 0)
                {
                    pfs("NO\n");
                    return 0;
                }

                ch = 'B';
                s.pb('B');
                b--;
            }

            else
            {
                if(a <= 0)
                {
                    pfs("NO");
                    return 0;
                }

                ch = 'G';
                s.pb('G');
                a--;
            }
        }
    }

    cout << s;

    return 0;
}
