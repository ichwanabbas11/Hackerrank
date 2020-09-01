#include <iostream>

using namespace std;

int main()
{
	long long int a = 0;
	long long int n;
	long long int* arr;

	cin >> n;

	arr = new long long int[n];
	for (long long int i = 0; i < n; i++)
	{
		cin >> arr[i];

	}

	for (long long int i = 0; i < n; i++)
	{
		a = a + arr[i];
		
	}

	cout << a;

	return 0;
}