/* 
------------------------------------------------------------------------------------------------------
----------------- This problem has been solved by coderdhanraj (Dhanraj Chaurasia) -------------------
------------------------------------------------------------------------------------------------------
*/
#include <bits/stdc++.h>
using namespace std;
 
#define int long long int
#define float long double
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vf vector<float>
#define vvi vector<vi>
#define mii map<int, int>
#define mpii multimap<int, int>
#define si set<int>
#define msi multiset<int>
#define pii pair<int, int>
#define vpii vector<pii>
#define rev greater<int>
#define ff first
#define ss second
#define pb push_back
#define in insert
#define mp make_pair
#define ppb pop_back()
#define fr front()
#define bk back()
#define cr clear()
#define emp empty()
#define size(x) (int)((x).size())
#define bg begin()
#define en end()
#define gcd(a, b) __gcd(a, b)
#define setp(x) setprecision(x)
#define er(v, x) erase(v.bg + x)
#define erase(v, x, y) erase(v.bg + x, v.bg + y)
#define all(v) v.bg, v.en
#define mx(v) *max_element(all(v))
#define mn(v) *min_element(all(v))
#define lower(v, x) lower_bound(all(v), x) - v.bg
#define upper(v, x) upper_bound(all(v), x) - v.bg
#define sum(v, x) accumulate(all(v), x)
#define index(v, x) find(all(v), x) - v.bg
#define cnt(v, x) count(all(v), x)
#define w(x, y) int x; cin >> x, x *= y; while(x--)
#define endl "\n"
#define mod 1000000007
const int INF = LLONG_MAX / 2;
const int N = 2e5 + 1;
/*
-----------------------------------------------------------------------------------------------------
----------------------------------- Solution Starts From Here  --------------------------------------
-----------------------------------------------------------------------------------------------------
*/
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int p, coins = 0;
    cin >> p;
    while(p)
    {
        if (p >= 3628800)
            p -= 3628800;
        else if (p >= 362880)
            p -= 362880;
        else if (p >= 40320)
            p -= 40320;
        else if (p >= 5040)
            p -= 5040;
        else if (p >= 720)
            p -= 720;
        else if (p >= 120)
            p -= 120;
        else if (p >= 24)
            p -= 24;
        else if (p >= 6)
            p -= 6;
        else if (p >= 2)
            p -= 2;
        else
            p--;
        coins++;
    }
    cout << coins << endl;

    return 0;
}