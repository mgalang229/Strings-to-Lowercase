#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	for (auto &c : s) {
		c = tolower(c);
	}
	cout << s << '\n';
	return 0;
}
