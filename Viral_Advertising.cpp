#include <iostream>

using namespace std;

int main()
{	
	int day,shared = 5, liked, cumulative = 0;

	cin >> day;

	for (int i = 0; i < day; ++i)
	{
		liked = shared / 2;
		shared = liked * 3;
		cumulative = cumulative + liked;
	}
	cout << cumulative;
	return 0;
}