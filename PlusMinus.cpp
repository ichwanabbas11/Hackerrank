#include <iostream>
using namespace std;

int main()
{
	int x;
	float  n, plus = 0, minus = 0, zero = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{	
		cin >> x;
		if (x > 0)
		{
			plus++;
		}
		else if (x < 0)
		{
			minus++;
		}
		else{
			zero++;
		}
	}
	zero = zero / n;
	minus = minus / n;
	plus = plus / n;

	cout << plus << endl << minus << endl << zero;
	return 0;
}