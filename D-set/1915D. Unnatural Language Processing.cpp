/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 10101
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

    while(t--) {
        string word;

        cin >> n;
        cin >> word;

        i = 0;
        string ans;
        vector<string> vec;

        while(i < n) {
            // try CVC and check the 4th letter

            // you have only three letters left
            if(i == n - 3) {
                for(j = i; j < i + 3; j++)
                    ans.push_back(word[j]);

                break;
            }

            // you have only two letters left
            else if(i == n - 2) {
                for(j = i; j < i + 2; j++)
                    ans.push_back(word[j]);

                break;
            }

            // you have more than three letters left
            else if(i < n - 3) {
                if(word[i + 3] == 'a' || word[i + 3] == 'e') {
                    for(j = i; j < i + 2; j++)
                        ans.push_back(word[j]);

                    ans.push_back('.');
                    i += 2;
                } else {
                    for(j = i; j < i + 3; j++)
                        ans.push_back(word[j]);

                    ans.push_back('.');
                    i += 3;
                }
            }

            else {
                cout << "this should not be the case\n";
            }
        }

        if(ans[ans.length() - 1] == '.') ans.pop_back();

        cout << ans << endl;
    }

    return 0;
}

/***https://github.com/Waqar-107/Codeforces***/
