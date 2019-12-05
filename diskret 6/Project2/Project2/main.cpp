#include<iostream>

using namespace std;

// A function to print all combination of a given length from the given array.
void Combination(int a[], int reqLen, int start, int currLen, bool check[], int len)
{
	// Return if the currLen is more than the required length.
	if (currLen > reqLen)
		return;
	// If currLen is equal to required length then print the sequence.
	else if (currLen == reqLen)
	{
	
		for (int i = 0; i < len; i++)
		{
			if (check[i] == true)
			{
				cout << a[i] << " ";
			}
		}
		cout << "\n";
		return;
	}
	// If start equals to len then return since no further element left.
	if (start == len)
	{
		return;
	}
	// For every index we have two options.
	// First is, we select it, means put true in check[] and increment currLen and start.
	check[start] = true;
	Combination(a, reqLen, start + 1, currLen + 1, check, len);
	// Second is, we don't select it, means put false in check[] and only start incremented.
	check[start] = false;
	Combination(a, reqLen, start + 1, currLen, check, len);
}

int main()
{
	int i, n;
	
	cout << "Print n: ";
	cin >> n;
	bool *check= new bool[n];
	int *arr=new int[n];
	cout << "\n";

	// Take the input of the array.
	for (i = 0; i < n; i++)
	{
		
		 arr[i]=i+1;
		check[i] = false;
	}
	for (i = 0; i < n; i++)
	{

		cout<< arr[i] << endl;;
		
	}

	// For each length of sub-array, call the Combination().
	for (i = 2; i <= n; i++)
	{
		cout << "\n combination of  length " << i << endl; ;
		Combination(arr, i, 0, 0, check, n);
	}
	return 0;
}



