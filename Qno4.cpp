#include <iostream>
using namespace std;
int main() {
	cout << "Enter Values " << '\n';
	int arr[3][4];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> arr[i][j];
		}
	}
	cout << "First Required Output (a) " << '\n';
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << "arr[" << i << "][" << j << "] =" << arr[i][j] << '\n';
		}
	}
	cout << "Second Required Output (b) " << '\n';
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << arr[i][j] << '\t';
		}
		cout << '\n';
	}
	return 0;
}
