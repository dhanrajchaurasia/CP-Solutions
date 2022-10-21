/* 
----------------------------------------------------------------------------------------------------------------------------
----------------------------- This problem has been solved by coderdhanraj (Dhanraj Chaurasia) -----------------------------
----------------------------------------------------------------------------------------------------------------------------
*/
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define float long double
#define vi vector<int>
#define vvi vector<vi>
#define mii map<int, int>
#define umii unordered_map<int, int>
#define si set<int>
#define usi unordered_set<int>
#define msi multiset<int>
#define pii pair<int, int>
#define vpii vector<pii>
#define rev greater<int>()
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define ppb pop_back()
#define lb lower_bound
#define ub upper_bound
#define fr front()
#define bk back()
#define cr clear()
#define emp empty()
#define size(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define gcd(x, y) __gcd(x, y)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define sp(x) fixed << setprecision(x)
#define mx(x) *max_element(all(x))
#define mn(x) *min_element(all(x))
#define max(x, y) (x < y ? y : x)
#define min(x, y) (x > y ? y : x)
#define sum(x) accumulate(all(x), 0)
#define unique(x) (x).erase(unique(all(x)), (x).end())
#define index(x, y) find(all(x), y) - (x).begin()
#define search(x, y) binary_search(all(x), y)
#define ceil(x, y) (x - 1) / y + (x > 0)
#define debug(x) cout << #x << " = " << x << endl
#define cins(x)       \
    for (auto &i : x) \
    cin >> i
#define cins2(x)      \
    for (auto &i : x) \
    cin >> i.ff >> i.ss
#define endl "\n"
#define mod 1000000007
#define mod2 998244353
#define inf 1e18
#define umap(x)           \
    (x).reserve(1 << 10); \
    (x).max_load_factor(0.25)
#define cond(x) cout << (x ? "YES" : "NO") << endl
/*
----------------------------------------------------------------------------------------------------------------------------
------------------------------------------------ Solution Starts From Here  ------------------------------------------------
----------------------------------------------------------------------------------------------------------------------------
*/
void solve()
{
    int n, m;
    cin >> n >> m;
    vi a(n), b(m);
    cins(a);
    cins(b);
    int i = 0, j = 0;
    sort(all(a));
    sort(all(b));
    int olds = inf;
    int news = -inf;
    int ans = inf;
    while (i < n or j < m)
    {
        if ((b[j] > a[i] or j == m) and i < n)
        {
            olds = a[i];
            i++;
        }
        else if (j < m)
        {
            news = b[j];
            j++;
        }
        ans = min(ans, abs(olds - news));
    }
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int ttc = 1;
    while (ttc--)
        solve();

    return 0;
}