#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long
#define double long double
#define endl '\n'
#define all(a) (a).begin(),(a).end()
#define ps(x,y) fixed<<setprecision(y)<<x          //cout<<ps(ans,5);
#define sz(a) ((int) (a).size())//this is to avoid common error in far manager
#define fastIO ios::sync_with_stdio(0);cin.tie(0);
#define mod1 1000000007
#define mod2 998244353
#define count_1(x) __builtin_popcountll(x)
#define count_0(x) __builtin_ctzll(x)
#define gcd __gcd
#define INF 1000000000000000000 
typedef tree<int, null_type,less<int>, rb_tree_tag, tree_order_statistics_node_update > pbds;//*find_by_order(index) order_of_key
const int RANDOM = chrono::high_resolution_clock::now().time_since_epoch().count();
struct chash {
    int operator()(int x) const { return x ^ RANDOM; }
};
template<typename T1,typename T2>
using umap=gp_hash_table<T1,T2,chash>;
int powmod(int a, int b,int mod){a%=mod;int res = 1;while(b>0){if(b&1)res=(res * a)%mod;a=(a*a)%mod;b >>= 1;}return res;}
int power(int a, int b){int res = 1;while(b>0){if(b&1)res=(res * a);a=(a*a);b >>= 1;}return res;}
int inv(int n){return powmod(n,mod1-2,mod1);}
const int dx[4] = {1,0,-1,0},dy[4] = {0,1,0,-1};
//bool ok(int x,int y){return x>=1 && y>=1 && x<=n && y<=n;}
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
 
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ", "; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? ", " : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifdef DEBUG
#define dbg(x...) cerr << "\e[91m"<<__func__<<":"<<__LINE__<<" [" << #x << "] = ["; _print(x); cerr << "\e[39m" << endl;
#else
#define dbg(x...)
#endif
template<typename T1,typename T2>
istream& operator>>(istream &istream, pair<T1,T2> &p){return (istream >> p.first >> p.second); }
template<typename T>
istream& operator>>(istream &istream, vector<T> &v){
  for(auto &it: v) cin >> it;
  return istream;
}
template<typename T1, typename T2>
ostream& operator<<(ostream &ostream, const pair<T1, T2> &p){ return (ostream << p.first << " " << p.second); }
template<typename T>
ostream& operator<<(ostream &ostream, const vector<T> &c){ for (auto &it: c) cout << it << " "; return ostream;}
template<class T1, class T2 = vector<T1>, class T3 = less<T1> > ostream& operator << (ostream& out, priority_queue<T1, T2, T3> const& pq){
    static priority_queue<T1, T2, T3> a = pq;
    out << "{ ";
    while(!a.empty())
        out << a.top() << " ", a.pop();
    return (out << "}");
}
template<class T> ostream& operator << (ostream& out, queue<T> const& q){
    static queue<T> a = q;
    out << "{"; string sep;
    while(!a.empty()){
        out << sep << a.front(); sep = ", "; a.pop();
    }
    return (out << "}");
}
template<class T> ostream& operator << (ostream& out, stack<T> const& q){
    static stack<T> a = q;
    out << "{"; string sep;
    while(!a.empty()){
        out << sep << a.top(); sep = ", "; a.pop();
    }
    return (out << "}");
}
void IO(string s) {
fastIO
if(s.empty()) {
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
freopen("error.txt","w",stderr);
#endif
}
else{
freopen((s+".in").c_str(),"r",stdin);
freopen((s+".out").c_str(),"w",stdout);  
}
}
void solve() {
int n;
cin >> n;
int num = 998244353LL;
if (n >= 0) {
    cout << ((n+0LL) % (num+0LL)) << endl;
}
else {
 int temp = -(n);
 if (temp <= num)cout << num % temp << endl;
 else cout << (num - (temp % num))%num << endl;
}
}
int32_t main() {
fastIO
IO("");
int t = 1;
//cin >> t;
for (int i = 1;i <= t; i++){
//cout << "Case #" << i << ": ";
solve();
}
return 0;
}
/*
1)I AM DEEPLY INTERESTED IN THESE PROBLEMS
2)DEVOTE YOURSELF COMPLETELY UNTIL PROBLEM GETS SOLVED
3)IF MY BRAIN ISN'T IN PAIN AND I DONT MAKE THE BREAKTHROUGH MYSELF THEN I AM LEARNING TO IMITATE NOT TO CREATE
4)FUCK EDITORIALS AND TEST SET DATA FIND YOURSELF WHERE YOUR FUCKIN LOGIC FAILS
*/  