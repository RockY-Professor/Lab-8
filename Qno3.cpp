#include <iostream>
using namespace std;
int main() {
	int array_pat[12];
	cout << "Enter number of Patients in cities" << '\n';
	int sum = 0;
	for (int i = 0; i < 12; i++) {
		cin >> array_pat[i];
		sum = sum + array_pat[i];
	}
	cout << "The Total number of patients are =  " << sum << '\n';
	int high = array_pat[0];
	int low = array_pat[0];
	for (int i = 0; i < 12; i++) {
		if (array_pat[i] > high) {
			high = array_pat[i];
		}
		else if (array_pat[i] < low) {
			low = array_pat[i];
		}
	}
	cout << "Highest number of patients are = " << high << '\n';
	cout << "Lowest number of patients are = " << low << '\n';
	return 0;
}
