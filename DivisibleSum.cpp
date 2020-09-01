#include <iostream>

using namespace std;

int main()
{
	int n, k, result = 0;
	int* data;

	cin >> n >> k;

	data = new int[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> data[i];

	}

	for (int i = 0; i < n; ++i)
	{
		for (int a = i+1; a < n; ++a)
		{
			if ((data[i]+data[a]) % k == 0)
			{
				result++;
			}
		}
	}


	cout << result;


	return 0;
}