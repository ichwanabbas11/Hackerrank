#include <iostream>

using namespace std;

int main()
{
	int n, k, charged, actual = 0;
	int* bill;

	cin >> n >> k;

	bill = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> bill[i];
		actual = actual + bill[i];
	}
	cin >> charged;
	actual = actual - bill[k];
	actual = actual / 2;

	if (actual == charged)
	{
		cout << "Bon Appetit";
	}
	else{
		cout << charged - actual;
	}

	return 0;
}