#include <iostream>

using namespace std;

int main()
{	
	int year, month, day;
	cin >> year;

	if (year >= 1700 and year <= 1917)
	{
		if (year % 4 == 0)
		{
			cout << "12.09." << year;
		}
		else{
			cout << "13.09." << year;
		}
	}
	else if (year >= 1919 and year <= 2700)
	{
		if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
			cout << "12.09." << year;
		}
		else{
			cout << "13.09." << year;
		}
	}
	else if (year == 1918){
		 cout << "26.09." << year;
	}


	return 0;
}