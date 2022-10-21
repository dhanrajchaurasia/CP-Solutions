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
#define vc vector<char>
#define vvi vector<vi>
#define mii map<int, int>
#define umii unordered_map<int, int>
#define si set<int>
#define msi multiset<int>
#define pii pair<int, int>
#define vpii vector<pii>
#define rev greater<int>()
#define ff first
#define ss second
#define pb push_back
#define in insert
#define mp make_pair
#define ppb pop_back()
#define lb lower_bound
#define ub upper_bound
#define fr front()
#define bk back()
#define cr clear()
#define emp empty()
#define size(x) (int)((x).size())
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define gcd(a, b) __gcd(a, b)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define ps(x, y) fixed << setprecision(y) << x
#define mx(v) *max_element(all(v))
#define mn(v) *min_element(all(v))
#define sum(v) accumulate(all(v), 0)
#define unique(v) v.erase(unique(all(v)), v.end())
#define index(v, x) find(all(v), x) - v.begin()
#define search(v, x) binary_search(all(v), x)
#define w(x, y)       \
    int x;            \
    cin >> x, x *= y; \
    while (x--)
#define debug(x) cout << #x << " : " << x << endl
#define cins(v)       \
    for (auto &i : v) \
    cin >> i
#define couts(v)      \
    for (auto &i : v) \
    cout << i << " "
#define endl "\n"
#define mod 1000000007
#define mod2 998244353
#define inf 1e18
/*
----------------------------------------------------------------------------------------------------------------------------
------------------------------------------------ Solution Starts From Here  ------------------------------------------------
----------------------------------------------------------------------------------------------------------------------------
*/
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vi v(n);
    cins(v);
    si s;
    umii m;
    for (int i = 0; i < k; i++)
    {
        s.insert(v[i]);
        m[v[i]]++;
    }
    int ans = size(s);
    for (int i = k; i < n; i++)
    {
        s.insert(v[i]);
        m[v[i]]++;
        m[v[i - k]]--;
        if(m[v[i - k]] == 0)
            s.erase(v[i - k]);
        ans = max(ans, size(s));
    }
    cout << ans << endl;

    return 0;
}