#include <iostream>
using namespace std;

int main()
{
	int n, temp, result = 0, x=0, y = 0;
	int* value;

	cin >> n; 
	value = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> value[i];
	}

	for (int i = 0; i < n; i++)
	{	
		temp = value[i];
	
		for (int a = i+1; a < n; a++)
		{
			if (temp-value[a] == 1 or temp == value[a])
			{
				x++;
				
			}
			if(temp-value[a] == -1 or temp == value[a])
			{
				y++;
			}
		}

		x++;
		y++;

		if (x > result and (x > y or x==y))
		{
			result = x;	
		}
		else if(y > result and y > x)
		{
			result = y;
		}
		x = 0;
	 	y = 0;
	}
	cout << result;
	return 0;
}