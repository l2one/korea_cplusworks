#include <iostream>
using namespace std;

int main() {

	int arr[5] = { 1, 3, 5, 7, 9 };
	int total = 0;
	double avg;

	for (int i = 0; i < size(arr); i++) {
		total += arr[i];
	}

	avg = (double)total / size(arr);

	cout << "ÃÑÇÕ : " << total << endl;
	cout << "Æò±Õ : " << total << endl;




	return 0;
}