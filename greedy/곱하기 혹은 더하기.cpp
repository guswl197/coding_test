#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void) {
	string str;
	vector<int> arr; 
	cin >> str; 

	for (int i = 0; i < str.length(); i++) {
		arr.push_back(str[i]-'0'); 
	}

	for (int i = 1; i < str.length(); i++) {
		if (arr[i] == 0 || arr[i-1] == 0 || arr[i] == 1 || arr[i-1] == 1) {
			arr[i]= arr[i - 1] + arr[i];
		}
		else {
			arr[i] = arr[i - 1] * arr[i];
		}

	}

	cout << arr[str.length() - 1] << '\n';
	return 0; 
}