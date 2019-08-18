    /***from dust i have come, dust i will be***/
     
    #include<bits/stdc++.h>
     
    typedef long long int ll;
    typedef unsigned long long int ull;
     
    #define dbg printf("in\n")
    #define nl printf("\n")
    #define N 201010
    #define inf 1e18
    #define mod 100000007
     
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
        //freopen("in.txt", "r", stdin);
     
        int i, j;
        int n, m, q;
     
        ll x = 0, k, z = 0;
        int neg = 0;
     
        sf(n);
        for(i = 0; i < n; i++)
        {
            sfl(k);
     
            if(k == 0)
                z++;
     
            else if(k > 0)
                x += (k - 1);
     
            else
            {
                // make it -1
                x += (-1 - k);//cout<<"x "<<x;nl;
                neg++;
            }
        }
     
        // -1 * -1 = 1, the odd one will remain alone
        if(neg % 2)
        {
            // make a zero -1
            if(z)
                x++, z--;
     
            else
                x += 2;
        }
     
        x += z;
     
        pfl(x);
     
        return 0;
    }
