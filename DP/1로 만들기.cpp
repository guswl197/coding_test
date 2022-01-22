#include <iostream>
#include <algorithm>

using namespace std;

int d[30001]; 
int x;

int main(void) {
	cin >> x; 
	d[0] = 0; 
	d[1] = 0; 

	for (int i = 2; i <= x; i++) {
		d[i] = d[i - 1] + 1;

		if (i % 5 == 0) {
			d[i] = min(d[i / 5] + 1, d[i]); 		
		}
		if (i % 3 == 0) {
			d[i] = min(d[i / 3] + 1, d[i]);
		}
		if (i % 2 == 0) {
			d[i] = min(d[i / 2] + 1, d[i]);
		}
	}

	cout << d[x] << '\n'; 
}