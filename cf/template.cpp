#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>

using namespace std;
using namespace chrono;

#define pi 3.1415926535897932384626433832795
#define int long long
constexpr int MOD = 1e9 + 7;
#define INF 1e18
#define all(x) begin(x), end(x)

#ifndef leomessi
#define debug(x) cerr << #x<<" "; __print(x); cerr << '\n';
#else
#define debug(x);
#endif

void __print(int x) { cerr << x; }
void __print(unsigned x) { cerr << x; }
void __print(unsigned long x) { cerr << x; }
void __print(unsigned long long x) { cerr << x; }
void __print(float x) { cerr << x; }
void __print(double x) { cerr << x; }
void __print(long double x) { cerr << x; }
void __print(char x) { cerr << '\'' << x << '\''; }
void __print(const char *x) { cerr << '\"' << x << '\"'; }
void __print(const std::string &x) { cerr << '\"' << x << '\"'; }
void __print(bool x) { cerr << (x ? "true" : "false"); }

template <class T, class V> void _print(pair <T, V> p);
template <class T> void __print(vector <T> v);
template <class T> void __print(set <T> v);
template <class T, class V> void __print(map <T, V> v);
template <class T> void __print(multiset <T> v);
template <class T, class V> void __print(pair <T, V> p) {cerr << "{"; __print(p.ff); cerr << ","; __print(p.ss); cerr << "}";}
template <class T> void __print(vector <T> v) {cerr << "[ "; for (T i : v) {__print(i); cerr << " ";} cerr << "]";}
template <class T> void __print(set <T> v) {cerr << "[ "; for (T i : v) {__print(i); cerr << " ";} cerr << "]";}
template <class T> void __print(multiset <T> v) {cerr << "[ "; for (T i : v) {__print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void __print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}


template<typename T>
void Zeit(T&& func) {
    auto start = chrono::high_resolution_clock::now();
    func();
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<std::chrono::microseconds>(end - start);
    cout << "\nExecution time: " << fixed << static_cast<double>(duration.count()) / 1000000.00 << " seconds" << '\n';
}

template <typename T>
// usage vector<int> primes = sieve<int>(100)
vector<T> sieve(T n) {
    vector<bool> arr(n + 1, true); 
    vector<T> vect;
    arr[0] = arr[1] = false;
    for (T i = 2; i <= n; i++) {
        if (arr[i]) {
            vect.push_back(i);
            for (T j = i * i; j <= n; j += i) {
                arr[j] = false;
            }
        }
    }
    return vect;
}

template <typename T>
// usage int res = C<int>(10, 5)
T C(T n, T r) { 
    T ans = 1;
    r = (r > n - r) ? n - r : r;
    for (T i = 1; i <= r; i++, n--) ans = ans * n / i;
    return ans;
}

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void leo() {
    
}

int32_t main() {
#ifndef leomessi
    freopen("Error.txt", "w", stderr);
#endif

  int t; cin >> t; while (t-- > 0)
  leo();
  
  auto lam = []() {
    this_thread::sleep_for(chrono::seconds(1));
  };

   //Zeit(lam);

  return 0;
}
