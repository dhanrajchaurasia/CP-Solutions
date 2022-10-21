/* 
--------------------------------------------------------------------------------------------------------------------------
------------------------- This problem has been solved by coderdhanraj (Dhanraj Chaurasia) -------------------------------
--------------------------------------------------------------------------------------------------------------------------
*/
#include <bits/stdc++.h>
using namespace std;
 
#define int long long int
#define double long double
#define vi vector<int>
#define vvi vector<vi>
#define mii map<int, int>
#define pii pair<int, int>
#define vii vector<pii>
#define ff first
#define ss second
#define pb push_back
#define ppb pop_back()
#define lb lower_bound
#define ub upper_bound
#define fr front()
#define bk back()
#define size(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define rep(i, a, b) for (int i = a; i < b; i++)
#define bck(i, a, b) for (int i = a - 1; i >= b; i--)
#define mx(x) *max_element(all(x))
#define mn(x) *min_element(all(x))
#define SUM(x) accumulate(all(x), 0LL)
#define ceils(x, y) x / y + (x % y != 0)
#define cins(x) for (auto &i : x) cin >> i
#define endl "\n"
#define mod (int)(1e9 + 7)
#define mod2 998244353
#define eps 1e-6
#define inf (int)2e18
#define inf2 (1LL << 60)
const int maxn = 2e5 + 10;

#ifndef coderdhanraj
#define debug(x) cerr << #x <<" :: "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(float t) {cerr << t;}
void google(int t) {cout << "Case #" << t << ": ";}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

int power(int a, int y, int m)
{
    int res = 1;
    a = a % m; 
    while (y > 0)
    {
        if (y & 1)
            res = (res * a) % m;
        y = y >> 1LL;
        a = (a * a) % m;
    }
    return res;
}

int inverse(int n, int m) {return power(n, m - 2, m);}
int mod_add(int a, int b, int m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
int mod_mul(int a, int b, int m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
int mod_sub(int a, int b, int m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
int mod_div(int a, int b, int m) {a = a % m; b = b % m; return (mod_mul(a, inverse(b, m) % m, m) % m);}

void IOS()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(10);
    cout.setf(ios::fixed);
    
    #ifndef coderdhanraj
    freopen("Error.txt", "w", stderr);
    #endif
}

/*
--------------------------------------------------------------------------------------------------------------------------
------------------------------------------------- Solution Starts From Here ----------------------------------------------
--------------------------------------------------------------------------------------------------------------------------
*/
struct dsu{
    vi parent;
    dsu(int n)
    {
        for (int i = 0; i <= n; i++)
            parent.pb(i);
    }
    int find(int a)
    {
        if (parent[a] == a)
            return a;
        return parent[a] = find(parent[a]);
    }
    void merge(int a, int b)
    {
         a = find(a), b = find(b);
         if (a != b)
            parent[b] = a;
    }
};

void solve()
{
    int n, m;
    cin >> n >> m;
    dsu a(n);
    rep(i, 0, m)
    {
        int t, u, v;
        cin >> t >> u >> v;
        if (t)
        {
            if (a.find(a.parent[u]) == a.find(a.parent[v]))
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
        else
        {
            a.merge(u, v);
        }
    }
}

int32_t main()
{
    IOS();
    int ttc = 1;
    // cin >> ttc;
    while (ttc--)
    {
        auto start_time = chrono::high_resolution_clock::now();
        solve();
        cerr << "Executed in " << chrono::duration_cast<chrono::milliseconds>(chrono::high_resolution_clock::now() - start_time).count() << "ms." << endl;
    }

    return 0;
}