#include <iostream>
#include<cmath>

using namespace std;
int GetFactorial(int n);

int Get—ombination(int n, int k);

void GetBinomResult(int stepin);




int main()
{
	int n = 4;
	
	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		arr[i] = i+1;
	}
	int cor = pow(2, n);
	for (int i = 0; i < cor; i++) {
		cout << " ";
		for (int j = 0; j < n; j++) {
			if (i&(1 << j))
				cout <<arr[j]<<",";
		}
	}
	cout << endl;
	GetBinomResult(11);
}
int GetFactorial(int n) {
	if (n == 0 || n == 1)
	{
		return 1;
	}
	else {
		return n * GetFactorial(n - 1);
	}
}

int Get—ombination(int n, int k)

{

	int result = (GetFactorial(n)) / (GetFactorial(n - k)*GetFactorial(k));

	return result;

}


void GetBinomResult(int stepin) {
	int k = 0;
	string res;
	while (k <= stepin)
	{
		if (k == 0) {
			cout << "x^(" << stepin-k << ")"<<"+";
	}
		else if (k == stepin) {
			cout <<  "y^(" << k << ")";
		}
		else {
			cout << pow((1), k)*Get—ombination(stepin, k) << "*x^(" << stepin - k << ")" << "*y^(" << k << ")" << "+";

		}
		k++;
	}
}

