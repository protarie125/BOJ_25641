#include <iostream>
#include <string>

using namespace std;

bool isBalanced(const string& s, int n) {
	if (1 == n % 2) {
		return false;
	}

	auto ns = int{ 0 };
	auto nt = int{ 0 };
	for (const auto& x : s) {
		if ('s' == x) {
			++ns;
		}
		else if ('t' == x) {
			++nt;
		}
	}

	if (ns == nt) {
		return true;
	}

	return false;
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;
	string s;
	cin >> s;

	while (0 < n && !isBalanced(s, n)) {
		s = s.substr(1);
		--n;
	}

	cout << s;

	return 0;
}