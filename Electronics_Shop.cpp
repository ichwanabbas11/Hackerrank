#include <iostream>

using namespace std;

int main()
{
	int budget,x,y,result = -1;
	int* keyboard;
	int* USBdrive;

	cin >> budget >> x >> y;
	keyboard = new int[x];
	USBdrive = new int[y];

	for (int i = 0; i < x; ++i)
	{
		cin >> keyboard[i];
	}
	for (int i = 0; i < y; ++i)
	{
		cin >> USBdrive[i];
	}

	for (int i = 0; i < x; ++i)
	{
		for (int a = 0; a < y; ++a)
		{
			if (keyboard[i] + USBdrive[a] < budget and keyboard[i] + USBdrive[a] > result)
			{
				result = keyboard[i] + USBdrive[a];
			}
			else if (keyboard[i] + USBdrive[a] == budget and keyboard[i] + USBdrive[a] > result)
			{
				result = keyboard[i] + USBdrive[a];
				goto label;
			}
		}
		
	}
	label:

		cout << result;
	


	return 0;
}