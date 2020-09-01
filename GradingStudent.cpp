#include <iostream>

using namespace std;

int main()
{
	int* grade;
	int n, temp;

	cin >> n;
	grade = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> grade[i];
		temp = grade[i];
		if (grade[i] >= 38 and grade[i] % 5 != 0)
		{
			temp = grade[i] % 5;
			temp = 5 - temp;
			if (temp <= 2)
			{
				grade[i] = grade[i] + temp;
			}
		}
		cout << grade[i] << endl;
	}

	return 0;
}