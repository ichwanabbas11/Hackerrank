#include <iostream>

using namespace std;

int main(){

	int smaller, bigger,n,x = 0,y = 0;
	int* data;
	cin >> n;
	data = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> data[i];
	}
	smaller = data[0];
	bigger = data[0];
	for (int i = 0; i < n; ++i)
	 {
	 	if (smaller > data[i])
	 	{
	 		x++;
	 		smaller = data[i];
	 	}
	 	if (bigger < data[i])
	 	{
	 		y++;
	 		bigger = data[i];
	 	}
	 } 

	 cout << y << " " << x;



	return 0;
}