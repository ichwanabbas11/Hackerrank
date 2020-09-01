#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	long int a = 0,b = 0;
	long int arr[5];


	for (int i = 0; i < 5; ++i)
	{
		cin >> arr[i];
	}
	sort(arr,arr+5);
	for (int i = 0; i < 4; ++i)
	{
		a = a+arr[i];
		b = b+arr[i+1];
	}
	if (a < b)
	{
		cout << a << " " << b;
	}
	else{
		cout << b << " " << a;	
	}



	return 0;
}