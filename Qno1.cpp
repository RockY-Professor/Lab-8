#include <iostream>
using namespace std;
int main() {
	int array_1[10];
	cout << "Enter Values User! " << '\n';
	for (int i = 0; i < 10; i++) {
		cin >> array_1[i];
	}
	cout << "You Entered THese values" << '\n';
	for (int i = 0; i < 10; i++) {
		cout << array_1[i] << '\n';
	}
	cout << "Reversed Order" << '\n';
	for (int i = 9; i >= 0; i--) {
		cout << array_1[i] << '\n';
	}
	return 0;
}
