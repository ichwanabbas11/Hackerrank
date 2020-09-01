#include <iostream>

using namespace std;

int same_topic = 0, temp = 0, max_result = 0;



int main()
{	
	string topics[1000];
	int n,m;

	cin >> n >> m;

	for (int i = 0; i < n; ++i)
	{	
		
			cin >> topics[i];
		
	}

	for (int i = 0; i < n; ++i)
	{
		for (int b = i+1; b < n; ++b)
		{
			for (int p = 0; p < m; ++p)
			{
				if (topics[i][p] == '1' or topics[b][p] == '1')
				{
					temp++;
				}
			}
			if (temp > same_topic)
			{
				same_topic = temp;
				max_result = 0;
				max_result++;
			}
			else if (temp == same_topic)
			{
				max_result++;
			}
			
			temp = 0;
		}
	}
	
	cout << same_topic << endl << max_result;


	return 0;
}
