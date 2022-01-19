#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>

using namespace std; 

int n, m; 
vector<int> arr;

int main(void) {

	cin >> n >> m; 
	for (int i = 0; i < n; i++) {
		int x; 
		cin >> x;
		arr.push_back(x); 
	}

	vector<int> d(m + 1, 1001); 

	d[0] = 0; 
	
	for (int i = 0; i < n; i++) {
		for (int j = arr[i]; j <= m; j++) {

			if (d[j - arr[i]] != 1001) {
				d[j] = min(d[j], d[j - arr[i]] + 1); 
			}
		}
	}
		
	if (d[m] >=1001) {
		cout << -1 << '\n';
	}
	else {
		cout << d[m] << '\n';
	}
	return 0; 

}