#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math,O3")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
 
#include "bits/stdc++.h"
#include "ext/pb_ds/assoc_container.hpp"
#include "ext/pb_ds/tree_policy.hpp"
using namespace __gnu_pbds;
using namespace std::chrono;
using namespace std;
 
template<class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update> ;
 
template<class key, class value, class cmp = std::less<key>>
using ordered_map = tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;
// find_by_order(k)  returns iterator to kth element starting from 0;
// order_of_key(k) returns count of elements strictly smaller than k;
 
template<class T>
using min_heap = priority_queue<T, vector<T>, greater<T> >;
 
//--------------------------------IO(Debugging)-----------------------------//
template<class T> istream& operator >> (istream &is, vector<T>& V) {
    for (auto &e : V)
        is >> e;
    return is;
}
template<class T, size_t N> istream& operator >> (istream &is, array<T, N>& V) {
    for (auto &e : V)
        is >> e;
    return is;
}
template<class T1, class T2> istream& operator >> (istream &is, pair<T1, T2>& V) {
    is >> V.first >> V.second;
    return is;
}
#ifdef __SIZEOF_INT128__
ostream& operator << (ostream &os, __int128 const& value) {
    static char buffer[64];
    int index = 0;
    __uint128_t T = (value < 0) ? (-(value + 1)) + __uint128_t(1) : value;
    if (value < 0)
        os << '-';
    else if (T == 0)
        return os << '0';
    for (; T > 0; ++index) {
        buffer[index] = static_cast<char>('0' + (T % 10));
        T /= 10;
    }
    while (index > 0)
        os << buffer[--index];
    return os;
}
istream& operator >> (istream& is, __int128& T) {
    static char buffer[64];
    is >> buffer;
    size_t len = strlen(buffer), index = 0;
    T = 0; int mul = 1;
    if (buffer[index] == '-')
        ++index, mul *= -1;
    for (; index < len; ++index)
        T = T * 10 + static_cast<int>(buffer[index] - '0');
    T *= mul;
    return is;
}
#endif
template<typename CharT, typename Traits, typename T>
ostream& _containerprint(std::basic_ostream<CharT, Traits> &out, T const &val) {
    return (out << val << " ");
}
template<typename CharT, typename Traits, typename T1, typename T2>
ostream& _containerprint(std::basic_ostream<CharT, Traits> &out, pair<T1, T2> const &val) {
    return (out << "(" << val.first << "," << val.second << ") ");
}
template<typename CharT, typename Traits, template<typename, typename...> class TT, typename... Args>
ostream& operator << (std::basic_ostream<CharT, Traits> &out, TT<Args...> const &cont) {
    out << "[ ";
    for (auto && elem : cont) _containerprint(out, elem);
    return (out << "]");
}
template<class L, class R> ostream& operator << (ostream& out, pair<L, R> const &val) {
    return (out << "(" << val.first << "," << val.second << ") ");
}
template<typename L, size_t N> ostream& operator << (ostream& out, array<L, N> const &cont) {
    out << "[ ";
    for (auto && elem : cont) _containerprint(out, elem);
    return (out << "]");
}
template<class T> ostream& operator<<(ostream &out, ordered_set<T> const& S) {
    out << "{ ";
    for (const auto& s : S) out << s << " ";
    return (out << "}");
}
template<class L, class R, class chash = std::hash<L> > ostream & operator << (ostream &out, gp_hash_table<L, R, chash> const& M) {
    out << "{ ";
    for (const auto& m : M) out << "(" << m.first << ":" << m.second << ") ";
    return (out << "}");
}
template<class P, class Q = vector<P>, class R = less<P> > ostream & operator << (ostream& out, priority_queue<P, Q, R> const& M) {
    static priority_queue<P, Q, R> U;
    U = M;
    out << "{ ";
    while (!U.empty())
        out << U.top() << " ", U.pop();
    return (out << "}");
}
template<class P> ostream& operator << (ostream& out, queue<P> const& M) {
    static queue<P> U;
    U = M;
    out << "{ ";
    while (!U.empty())
        out << U.front() << " ", U.pop();
    return (out << "}");
}
#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1) {
    cerr << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
    const char* comma = strchr(names + 1, ',');
    cerr.write(names, comma - names) << " : " << arg1 << " | ";
    __f(comma + 1, args...);
}
#else
#define trace(...) 1
#endif
 
//------------------------------------RNG-----------------------------------//
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
inline int64_t random_long(long long l = LLONG_MIN, long long r = LLONG_MAX) {
    uniform_int_distribution<int64_t> generator(l, r);
    return generator(rng);
}
struct custom_hash { // Credits: https://codeforces.com/blog/entry/62393
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
    template<typename L, typename R>
    size_t operator()(pair<L, R> const& Y) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(Y.first * 31ull + Y.second + FIXED_RANDOM);
    }
};
 
 
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
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
 
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
 
//ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
 
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
 
ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
 
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
 
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
 
ll phin(ll n) {ll number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0) n /= 2;} for (ll i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))    
 
 
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
