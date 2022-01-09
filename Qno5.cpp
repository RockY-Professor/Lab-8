#include <iostream>
using namespace std;
int main() {
	int arr[2][3] = { {10,20,30}, {40,60,50} };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << '\t';
		}
		cout << '\n';
	}
	cout << "Transpose of array \n";
	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 2; i++) {
			cout << arr[i][j] << '\t';
		}
		cout << '\n';
	}
	return 0;
}
