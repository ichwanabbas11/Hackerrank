#include <iostream>

using namespace std;

int main()
{	int x,n=0,y=0,sum;
	int** matrice;

	cin >> x;
	matrice = new int* [x];
	for (int i = 0; i < x; ++i)
	{
		matrice[i] = new int[x];
	}

	for (int i = 0; i < x; ++i)
	{
		for (int a = 0; a < x; ++a)
		{
			cin >> matrice[i][a];
		}
	}

	for (int i = 0; i < x; ++i)
	{
		n = n+matrice[i][i];
	}

	for (int i = x-1, j = 0; i >= 0 and j < x; --i, j++)
	{
		y = y + matrice[j][i];
	}

	sum = n - y;
	if (sum < 0)
	{
		sum = -1 * sum;
	}
	cout << sum;


	return 0;
}