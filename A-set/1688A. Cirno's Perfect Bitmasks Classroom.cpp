 #include <bits/stdc++.h>
 
    using namespace std;
     
    int main() {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
     
        int t;
        cin >> t;
        while (t--) {
            long long x;
            cin >> x;
            long long ans = 0;
            for (int i = 0; i < 33; i++) {
            
                if ((x & (1LL << i))) {
                    ans += (1LL << i);
                    break;
                }
            }
            
            if ((x ^ ans) > 0) {
                cout << ans << '\n';
                continue;
            }
            
            for (int i = 0; i < 33; i++) {
            
                if ((x & (1LL << i)) == 0) {
                    ans += (1LL << i);
                    break;
                }
            }
            cout << ans << '\n';
        
        }
    }
