#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string s;
		cin >> s;
		bool ans = false;
		int n = s.length();
		// check if the given string has a body (size is greater than 3)
		if (n > 3) {
			// check if the first two characters is equal to "</" 
			// and last character is equal to '<'
			ans = (s[0] == '<' && s[1] == '/' && s[n - 1] == '>');
			for (int i = 2; i < n - 1; i++) {
				// check if there is a character that is not a lowercase 
				// alphabetical letter or not a digit
				if (!(islower(s[i]) || isdigit(s[i]))) {
					// if yes, then set 'ans' to false
					ans = false;
				}
			}
		}
		if (ans) {
			cout << "Success\n";
		} else {
			cout << "Error\n";
		}
	}
	return 0;
}
