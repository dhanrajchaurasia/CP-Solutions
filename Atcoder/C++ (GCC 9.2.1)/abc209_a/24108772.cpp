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
#define vf vector<float>
#define vvi vector<vi>
#define mii map<int, int>
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
#define bg begin()
#define en end()
#define all(v) v.bg, v.en
#define gcd(a, b) __gcd(a, b)
#define ps(x, y) fixed << setprecision(y) << x
#define mx(v) *max_element(all(v))
#define mn(v) *min_element(all(v))
#define sum(v) accumulate(all(v), 0)
#define unique(v) v.erase(unique(all(v)), v.en)
#define index(v, x) *find(all(v), x)
#define w(x, y)       \
    int x;            \
    cin >> x, x *= y; \
    while (x--)
#define cins(v)       \
    for (auto &i : v) \
    cin >> i
#define couts(v)      \
    for (auto &i : v) \
    cout << i << " "
#define endl "\n"
#define mod 1000000007
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

    int a, b;
    cin >> a >> b;
    if (a < b)
        cout << b - a + 1 << endl;
    else
        cout << 0 << endl;

    return 0;
}