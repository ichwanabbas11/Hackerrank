#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = n; i > 0; i--)
	{
		for (int a = 1; a <= i-1; a++)
		{
			cout << " ";
		}
		for (int b = i-1; b < n; b++)
		{
			cout << "#";
		}
		cout << endl;
	}
	return 0;
}