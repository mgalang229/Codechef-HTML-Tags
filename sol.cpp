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
		// check if the first two characters is equal to "</" and the 
		// last character is equal to '>'
		if (s.substr(0, 2) != "</" || s.back() != '>') {
			// if not, then output ERROR
			cout << "Error\n";
			continue;
		}
		bool checker = true;
		int cnt = 0;
		for (int i = 2; i < (int) s.size() - 1; i++) {
			// check if the characters in the body part is not equal to a lowercase
			// alphabetical letter or a numerical digit
			if ((s[i] < 'a' || s[i] > 'z') && (s[i] < '0' || s[i] > '9')) {
				// if it's true, then set checker to false and break the loop
				checker = false;
				break;
			}
			// increment 'cnt'
			cnt++;
		}
		// lastly, check if 'checker' is true and 'cnt' is greater than 0
		cout << (checker && cnt > 0 ? "Success" : "Error") << '\n';
	}
	return 0;
}
