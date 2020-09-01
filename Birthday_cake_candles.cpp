#include <iostream>

using namespace std;

int main()
{
	
	int* arr;
	int n,x = 0,y=0;
	cin >> n;
	arr = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	x = arr[0];
	for (int i = 0; i < n; ++i)
	{
		if (x < arr[i])
		{	y = 0;
			x = arr[i];
		}
		if (x == arr[i])
		{
			y++;	
		}
	}
	cout << y;
	return 0;
}