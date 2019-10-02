    /***from dust i have come, dust i will be***/
     
    #include<bits/stdc++.h>
     
    typedef long long int ll;
    typedef unsigned long long int ull;
     
    #define dbg printf("in\n")
    #define nl printf("\n")
    #define N 1010101
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
        // freopen("in.txt", "r", stdin);
     
        int i, j, k;
        int n, m;
     
        sff(n, k);
     
        set<int> s;
        deque<int> q;
     
        int a[n];
     
        for(i = 0; i < n; i++)
            sf(a[i]);
     
        for(i = 0; i < n; i++)
        {
            // inside the chat list
            if(s.find(a[i]) != s.end()) continue;
     
            if(q.size() == k)
            {
                s.erase(q.back());
                q.pop_back();
                q.push_front(a[i]);
                s.insert(a[i]);
     
            }
     
            else
            {
                q.push_front(a[i]);
                s.insert(a[i]);
            }
        }
     
        pf(q.size()); nl;
        while(q.size())
        {
            pf(q.front());
            pfs(" ");
     
            q.pop_front();
        }
     
        return 0;
    }
