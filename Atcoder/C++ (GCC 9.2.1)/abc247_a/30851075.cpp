#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;	
	cin >> s;
	int n = s.size();
	string ans(n, '0');
	for (int i = 0; i < n - 1; i++)
	{
		if (s[i] == '1')
			ans[i + 1] = '1';
	}
	cout << ans << endl;
	return 0;
}