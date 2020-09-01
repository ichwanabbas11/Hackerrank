#include <iostream>
#include <string>
using namespace std;

int main()
{	int i,j,x = 0,k,y = 0,a = 0;

	string word_1;
	string word_2;
	cin >> word_1;
	cin >> word_2;
	cin >> k;
	for (i = 0, j = 0; word_1[i] != '\0' or word_2[j] != '\0'; i++, j++)
	{
		if ((word_1[i] != word_2[j]) and (word_1[i] != '\0' or word_2[j] != '\0'))
		{	y = 1;
			a = i;
			if (word_1[i] != '\0' and word_2[j] != '\0')
			{	
				x+=2;
			}else{
				x++;	
			}		
		}
		else if(word_1[i] and word_2[j] and y == 1){
			x+=2;
		}
		if (word_1[a] == '\0' and word_1[a-1] != '\0' and word_2[a] != word_2[a-1])
		{
			x = x + (2*a);
		}

	} 
	if (k >= x)
	{
		cout << "Yes" << endl;
	}
	else{
		cout << "No" << endl;
	}
	
	return 0;
}