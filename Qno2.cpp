#include <iostream>
using namespace std;
int main() {
	double array_1[7];
	double array_2[7];
	cout << "Enter Temp in celsius" << '\n';
	for (int i = 0; i < 7; i++) {
		cin >> array_1[i];
	}
	for (int i = 0; i < 7; i++) {
		array_2[i] = (array_1[i] * 1.8) + 32;
	}
	cout << "Celsuis " << " " << "Farhenhiet" << '\n';
	for (int i = 0; i < 7; i++) {
		cout << array_1[i] << '\t' << array_2[i] << '\n';
	}
	return 0;
}
