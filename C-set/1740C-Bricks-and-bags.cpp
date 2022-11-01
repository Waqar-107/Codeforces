#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math,O3")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
 
#include "bits/stdc++.h"
#include "ext/pb_ds/assoc_container.hpp"
#include "ext/pb_ds/tree_policy.hpp"
using namespace __gnu_pbds;
using namespace std::chrono;
using namespace std;
 

 
 
//------------------------------------Defines-------------------------------//
#define ll  long long
//#define ull unsigned long long
#define ld long double

 
#define getline_clear cin.ignore()
#define merge_arrays(a,b,c) merge(all(a),all(b),back_inserter(c))
#define uid(a, b) uniform_int_distribution<int>(a, b)
#define pb push_back
#define eb emplace_back
#define F first
#define S second
 typedef long long LL;
typedef pair<ll, ll> pii;
typedef pair<LL, LL> pll;
typedef pair<string, string> pss;
typedef vector<long long int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<LL> vl;
typedef vector<vl> vvl;
typedef map<ll,ll> mll;
#define elif else if
#define rep(i, n) for(int i=0;i<n;i++)
#define repn(i, n) for(int i=1;i<=n;i++)
#define reset(a, b) memset(a, b, sizeof(a))
#define cy cout<<"YES"<<"\n"
#define cn cout<<"NO"<<'\n'
#define cyo cout <<"YO"<<'\n';
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define pf push_front
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define sz size()
//---------------------Global Constants and Functions-----------------------//

 
//-----------------------------Code begins----------------------------------//

const int maxn = 2*1e5 + 5;

 void solve(){
   
   ll n;
   cin >> n;
   vi a(n);
   cin >> a;
  sort(all(a));
   set<ll> k;
   rep(i,n)k.insert(a[i]);
   if(k.size() == 1){
    cout << 0 << '\n';
    return;
   }
 
 
   ll ans = -1;
  
   for(int i =0;i<n;i++){
      if(i == 0){
         ans = max(ans, a[n-1] + a[1] - 2*a[0]);
      }
      elif(i == n-1){
         ans = max(ans , 2*a[n-1] - a[0] - a[n-2]);
      }
      else{
         ans = max(ans, max(a[i+1]-a[i],a[i]-a[i-1]) + max(a[n-1]-a[i],a[i]-a[0]));
      }

   } 

   cout << ans <<'\n';


   





}










 





 

  









    







    




    
    
       










  











 
   




  








  






  



 
int32_t  main( void ) {
    ios_base::sync_with_stdio(false), 
    cin.tie(NULL);
 
      
    
 
    // Get duration. Substart timepoints to
    // get duration. To cast it to proper unit
    // use duration cast method
   
 
 

    int T = 1;
   cin >> T;
   

  
    auto start = high_resolution_clock::now();
   
    for (int t = 1; t <= T; t++) {
        //cout << "Case #" << t << ": ";
       solve();
    
    
    
    }
    return 0;
      auto stop = high_resolution_clock::now();
       auto duration = duration_cast<microseconds>(stop - start);
       /*cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;*/
}        
