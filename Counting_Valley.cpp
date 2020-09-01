#include <iostream>

using namespace std;

int main(){

	int NumberOfPath,u = 0,d = 0,valley = 0,x = 0;
	string path;

	cin >> NumberOfPath;
	cin >> path;

	for(int a = 0; a < NumberOfPath; a++){

			if(path[a] == 'U'){
				u++;
			}
			else if(path[a] == 'D'){
				d++;
			}
			if(u == d and u != 0 and d != 0){

				if(path[x] != 'U'){valley++;}

				u = 0; d = 0;
				x = a + 1;
			}
		}
	cout << valley << endl;
	
	return 0;
}