#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

bool sade(int num) {
		if(num % 2 == 0)
		return false;

	for(int i = 3; i <= sqrt(num); i+=2) {
		if(num % i == 0)
			return false;
	}

	return true;
}
using namespace std;
int main() {
	int n;
	string a;

	cin >> n >> a;

	int m = atoi(a.c_str());
	int p = pow(10, a.size());

	bool tapdim = false;
	int i;

	 for(i = 1; i < n; i++) {
		int cur = m + i;
		if(cur >= p)
			break;

		tapdim = sade(cur);

		if(tapdim)
			break;
	}

	if(tapdim) {
		cout << i - 1 << "\n";
	} else {
		cout << -1 << "\n";
	}

	return 0;
}
