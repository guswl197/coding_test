#include <iostream>
#include <algorithm>

using namespace std;

int d[1001]; 
int n; 

int main(void) {
	cin >> n; 
	d[0] = 0;
	d[1] = 1;
	d[2] = 3; 

	for (int i = 3; i <=n; i++) {
		d[i] = (d[i - 2] * 2 + d[i - 1]) % 796796;
	}

	cout << d[n]<< '\n'; 
	return 0; 
}