#include <iostream>
#include <vector>
using namespace std;

int main(){

	vector<int> others_score;
	int* passingValue;
	int* alice_score;
	int count,count_2;

	cin >> count;
	passingValue = new int[count];

	for (int i = 0; i < count; i++)
	{
		cin >> passingValue[i];
		if (passingValue[i] != passingValue[i-1])
		{
			others_score.push_back(passingValue[i]);	
		}
	}
	delete[] passingValue;
	cin >> count_2;
	alice_score = new int[count_2];
	for (int i = 0; i < count_2; i++)
	{
		cin >> alice_score[i];
	}
	
	for (int i = 0; i < count_2; i++)
	{
		for (int b = (others_score.size())-1; b >= 0; b--)
		{
			if(alice_score[i] == others_score[b])
			{
				cout << b + 1 << endl;
				break;
			}
			else if(alice_score[i] > others_score[b] and b != 0){
				if (alice_score[i] < others_score[b-1])
				{
					cout << b+1 << endl;
					break;
				}
				else{
					continue;
				}

			}
			else if(alice_score[i] > others_score[b] and b == 0){
				cout << b + 1 << endl;
				break;
			}
			else if(alice_score[i] < others_score[b] and alice_score[i] < others_score[b-1]){
				cout << b + 2 << endl;
				break;
			}
		}
	}

	return 0;
}