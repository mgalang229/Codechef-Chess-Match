#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, a, b;
		cin >> n >> a >> b;
		// view the image in this repository for the derivation of formula
		int white_turns = (n + 1) / 2;
		int black_turns = n / 2;
		int total_white = 180 + (2 * white_turns);
		int total_black = 180 + (2 * black_turns);
		cout << (total_white + total_black) - (a + b) << '\n';
	}
	return 0;
}
