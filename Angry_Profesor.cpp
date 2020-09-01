#include <iostream>

using namespace std;

int main()
{
	int t, k, n, plus = 0;
	int* attendant;

	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		cin >> k >> n;
		attendant = new int[k];
		for (int a = 0; a < k; ++a)
		{
			cin >> attendant[a];
			if (attendant[a] <= 0)
			{
				plus++;		
			}			
		}
		if (plus >= n)
		{
			cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;
		}
		plus = 0;
	}

	return 0;
}