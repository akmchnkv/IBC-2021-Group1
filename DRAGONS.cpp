#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int s, n, fir, seco;
	cin >> s >> n;
	vector<pair<int, int> > p(n);
	for (int i = 0; i < n; i++) {
		cin >> fir >> seco;
		p[i].first = fir;
		p[i].second = seco;
	}
	sort(p.begin(), p.end());
	for (int i = 0; i < n; i++) {
		if (p[i].first >= s) {
			cout << "NO" << endl;
			return 0;
		}
		s += p[i].second;
	}
	cout << "YES" << endl;
	return 0;
}
