#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;
    b *= 5;
    string ans = to_string(a);
    if (b == 5)
        ans += "0";
    ans += to_string(b);
    cout << ans << endl;
    return 0;
}