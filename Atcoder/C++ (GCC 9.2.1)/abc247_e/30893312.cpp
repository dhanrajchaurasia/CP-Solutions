#include <bits/stdc++.h>

using namespace std;

#define int long long int
#define double long double
     
#define vi vector<int>
#define mii map<int, int>
#define pii pair<int, int>
#define vii vector<pii>

#define ff first
#define ss second
#define pb push_back
#define ppb pop_back()
#define in insert
#define lb lower_bound
#define ub upper_bound
#define fr front()
#define bk back()
#define make make_pair
#define size(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define repp(i, a, b, c) for (int i = a; i < b; i += c)
#define bckk(i, a, b, c) for (int i = a - 1; i >= b; i -= c)
#define rep(i, a, b) repp(i, a, b, 1)
#define bck(i, a, b) bckk(i, a, b, 1)
#define mx(x) *max_element(all(x))
#define mn(x) *min_element(all(x))
#define summ(x) accumulate(all(x), 0LL)
#define mem(x, y) memset(x, y, sizeof(x))
#define count_0(x) __builtin_clzll(x)
#define count_1(x) __builtin_popcountll(x)
#define isEven(x) __builtin_parityll(x)
#define mbit(x) __lg(x)
#define cins(x) for (auto &i : x) cin >> i
#define ceils(x, y) (x + y - 1) / y
#define srt(x) is_sorted(all(x))
#define gcd __gcd
#define endl '\n';

/* ::::::::::::::::::::::::::::::::::::::::::::::::::::::::: TEMPLATES ::::::::::::::::::::::::::::::::::::::::::::::::::: */

class custom_hash {
    public:
    static uint64_t splitmix64(uint64_t x) 
    {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const 
    {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
template <typename T> using max_heap = priority_queue<T>;
template <typename T> using min_heap = priority_queue<T, vector<T>, greater<T>>;
template <typename T> using vec = vector<vector<T>>;
template <typename T> using uset = unordered_set<T, custom_hash>;
template <typename T1, typename T2> void amax(T1 &x, T2 y) {if(x < y) x = y;}
template <typename T1, typename T2> void amin(T1 &x, T2 y) {if(x > y) x = y;}

// find_by_order(K): Returns an iterator to the Kth largest element (counting from zero)
// order_of_key (K): Returns the number of items that are strictly smaller than K

/* ::::::::::::::::::::::::::::::::::::::::::::::::::::::::: UNIVERSAL CONSTANTS ::::::::::::::::::::::::::::::::::::::::::::::::::: */

const double pi = acos(-1.0);
const double eps = 1e-9;
const int mod = 1e9 + 7;
const int mod2 = 998244353;
const int inf = 2e18;
const int maxn = 2e5 + 10;
const int maxx = 2e6 + 10;
char dir[] = {'D', 'L', 'R', 'U'};
const int dx[] = {1, 0, 0, -1, 1, 1, -1, -1};
const int dy[] = {0, -1, 1, 0, -1, 1, -1, 1};

/* ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: DEBUGGING AREA :::::::::::::::::::::::::::::::::::::::::::::::::::::: */

void __print(int x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(bool x) {cerr << (x ? "true" : "false");}
void _print() {cerr << "]\n";}

template <typename T1, typename T2> void __print(const pair<T1, T2> &x) {cerr << '{'; __print(x.ff); cerr << ','; __print(x.ss); cerr << '}';}
template <typename T> void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
template <typename T1, typename... T2> void _print(T1 t, T2... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}

#ifndef coderdhanraj
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

/* ::::::::::::::::::::::::::::::::::::::::::::::::::::::::: USEFUL FUNCTIONS :::::::::::::::::::::::::::::::::::::::::::::::::::: */

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

bool isSqr(int x)
{
    int y = sqrtl(x);
    return x == y * y; 
}

bool isPrime(int x)
{
    if (x == 1)
        return false;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return false;
    return true;
}

/* ::::::::::::::::::::::::::::::::::::::::::::::::::::::::: MODULUS OPERATIONS :::::::::::::::::::::::::::::::::::::::::::::::::::: */

int inverse(int n, int m) {return power(n, m - 2, m);}
int mod_add(int a, int b, int m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
int mod_mul(int a, int b, int m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
int mod_sub(int a, int b, int m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
int mod_div(int a, int b, int m) {a = a % m; b = b % m; return (mod_mul(a, inverse(b, m), m));}

/* ::::::::::::::::::::::::::::::::::::::::::::::::::::::::: FAST INPUT/OUTPUT ::::::::::::::::::::::::::::::::::::::::::::::::::::: */

void IOS()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(20);
    cout.setf(ios::fixed);
    
    #ifndef coderdhanraj
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //freopen("Error.txt", "w", stderr);
    #endif
}

/* ::::::::::::::::::::::::::::::::::::::::::::::::::::::: SOLUTION TO THE PROBLEM ::::::::::::::::::::::::::::::::::::::::::::::::: */

#define N maxn

int TREE[5 * N];

// Function which builds the segment TREE
void build(vi &arr, int node, int start, int end)
{
    if (start == end) {
        TREE[node] = arr[start];
        return;
    }
    int mid = (start + end) >> 1;
    build(arr, 2 * node, start, mid);
    build(arr, 2 * node + 1, mid + 1, end);
    TREE[node] = TREE[2 * node] | TREE[2 * node + 1];
}

// Function that returns bitwise OR of segment [L..R]
int query(int node, int start, int end, int l, int r)
{
    if (start > end || start > r || end < l) {
        return 0;
    }

    if (start >= l && end <= r) {
        return TREE[node];
    }

    int mid = (start + end) >> 1;
    int q1 = query(2 * node, start, mid, l, r);
    int q2 = query(2 * node + 1, mid + 1, end, l, r);
    return q1 | q2;
}

// Function to count requisite number of subarrays
int countSubArrays(vi &arr, int n, int K)
{
    int count = 0;
    for (int i = 0; i < n; i++) {

        // Check for subarrays starting with index i
        int low = i, high = n - 1, index = INT_MAX;
        while (low <= high) {

            int mid = (low + high) >> 1;

            // If OR of subarray [i..mid] >= K,
            // then all subsequent subarrays will have OR >= K
            // therefore reduce high to mid - 1
            // to find the minimal length subarray
            // [i..mid] having OR >= K
            if (query(1, 0, n - 1, i, mid) >= K) {
                index = min(index, mid);
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        // Increase count with number of subarrays
        // having OR >= K and starting with index i
        if (index != INT_MAX) {
            count += n - index;
        }
    }
    return count;
}
void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    vi v(n);
    cins(v);
    int ans = 0, minhai = inf, maxhai = 0, prev = 0;
    vii a;
    set<int> minkaha, maxkaha;
    bool gotMini = false, gotMaxi = false;
    rep(i, 0, n)
    {
        amin(minhai, v[i]);
        amax(maxhai, v[i]);
        gotMini |= (minhai == y);
        gotMaxi |= (maxhai == x);
        if (minhai < y or maxhai > x)
        {
            minhai = inf, maxhai = 0;
            if (prev != i and (gotMini & gotMaxi))
                a.pb({prev, i - 1});
            prev = i + 1;
            gotMaxi = gotMini = 0;
        }
        if (v[i] == x)
            maxkaha.in(i);
        if (v[i] == y)
            minkaha.in(i);
    }
    if ((gotMini & gotMaxi) and prev != n)
    	a.pb({prev, n - 1});
    for (auto &[l, r] : a)
    {
        vi arr;
        rep(i, l, r + 1)
        {
            if (v[i] != x and v[i] != y)
                arr.pb(0);
            else if (v[i] == x)
                arr.pb(1);
            else
                arr.pb(2);
        }
        int m = size(arr);
        rep(i, 0, 5 * m)
            TREE[i] = 0;
        build(arr, 1, 0, m - 1);
        ans += countSubArrays(arr, m, 1 + 2 * (x != y));
    }
    cout << ans << endl;
}  

int32_t main()
{
    IOS();
    int ttc = 1;
    // cin >> ttc;
    while (ttc--)
        solve();
    return 0;
}