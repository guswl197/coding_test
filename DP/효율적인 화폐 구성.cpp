#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
vector<int> v;

int main(void) {
	cin >> n >> m; 
	vector<int> d(m + 1, 1001);

	for (int i = 0; i < n; i++) {
		int x; 
		cin >> x;
		v.push_back(x); 
	}

	d[0] = 0;
	
	for (int i = 1; i <= m; i++) {
		for (int j = 0; j < n; j++) {
			if (i - v[j] >= 0) {
				d[i] = min(d[i - v[j]] + 1, d[i]); 
			}
		}
	}
	
	if (d[m] >= 1001) {
		cout << -1 << '\n';
	}
	else {
		cout << d[m] << '\n';
	}
	return 0;
}