#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
	int n;
	int group = 0;
	int member = 0;
	vector<int> arr;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		arr.push_back(x);
	}

	sort(arr.begin(), arr.end()); //오름차순 정렬 

	for (int i = 0; i < n; i++) {

		member++;
		if (member >= arr[i]) {
			group++;
			member = 0; 
		}
	}

	cout << group << '\n';
	return 0;
}