#include <iostream>

using namespace std;

int main()
{
		
	string word;
	int h[26], big = 0;


	for (int i = 0; i < 26; ++i)
	{
		cin >> h[i];
	}

	cin >> word;

	for (int i = 0; i < word.size(); ++i)
	{	
		if (big < h[(int)word[i]-97])
		{
			big = h[(int)word[i]-97];
		
		}
	}

	cout << big*(word.size()) << endl;


	return 0;
}