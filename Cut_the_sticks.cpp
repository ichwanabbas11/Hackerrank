#include <iostream>
using namespace std;

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
int main()
{
	int n,y=0;
	int* sticks;
	
	cin >> n;

	sticks = new int[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> sticks[i];
	}


	qsort (sticks, n, sizeof(int), compare);

	cout << n << endl;
	
	for (int i = 0; i < n-1; ++i)
	{	
		if (sticks[i] == sticks[i+1])
		{
			y++;
		}
		else{
			y++;
		
			cout << n - y << endl;
		}
	}

	return 0;
}