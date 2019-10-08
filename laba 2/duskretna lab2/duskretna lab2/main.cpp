#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main() {
	const int n = 7;
	const int m = 5;
	int putuznista = 7;
	int putuznistb = 5;
	char a[n];
	char b[m];
	char insection[100];
	char sumetryRizn[100];
	int count;

	cout << "Enter 7 elements of mn a" << endl;
	for (auto i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << "put 5 elements of b:" << endl;
	for (auto j = 0; j < m; j++) {
		cin >> b[j];
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < putuznista; j++) {

			if (a[i] == a[j]) {

				for (int k = j; k < putuznista; k++) {
					a[k] = a[k + 1];
				}
				//Decrement size after removing duplicate element
				putuznista--;
				// If shifting of elements occur then don't increment j
				j--;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < putuznistb; j++) {

			if (b[i] == b[j]) {

				for (int k = j; k < putuznistb; k++) {
					a[k] = a[k + 1];
				}
				//Decrement size after removing duplicate element
				putuznistb--;
				// If shifting of elements occur then don't increment j
				j--;
			}
		}
	}
		int powerIntesection = 0;
		int powerRizn = 0;
		cout << "intersection";
		for (auto i = 0; i < putuznista; i++) {
			for (auto j = 0; j < putuznistb; j++) {
				if (a[i] == b[j]) {
					insection[powerIntesection] = a[i];
					cout << "{" << insection[powerIntesection] << "}";
					powerIntesection++;
					break;
				}

			}
		}
		cout << endl;
		cout << "rizn";
		bool k = true;
		for (auto i = 0; i < putuznista; i++) {
			for (auto j = 0; j < powerIntesection; j++) {
				if (a[i] == insection[j]) {
					k = false;
					break;
				}
			}
			if (k == true) {
				sumetryRizn[powerRizn] = a[i];
				cout << "{" << sumetryRizn[powerRizn] << "}";
				powerRizn++;
			}
			k = true;
		}
		k = true;
		for (auto i = 0; i < putuznistb; i++) {
			for (auto j = 0; j < powerIntesection; j++) {
				if (b[i] == insection[j]) {
					k = false;
					break;
				}
			}
			if (k == true) {
				sumetryRizn[powerRizn] = b[i];
				cout << "{" << sumetryRizn[powerRizn] << "}";
				powerRizn++;
			}
			k = true;
		}
		cout << endl;

		cout << "powerIntesection:" << powerIntesection << endl;
		cout << "powerRizn:" << powerRizn;
	}

/*for (int i = 0; i < arr1; i++) {
	for (int j = i + 1; j < arr1; j++) {
		//If any duplicate found 
		if (A[i] == A[j]) {
			// Delete the current duplicate element
			for (int k = j; k < arr1; k++) {
				A[k] = A[k + 1];
			}
			//Decrement size after removing duplicate element
			arr1--;
			// If shifting of elements occur then don't increment j
			j--;
		}
	}
}*/