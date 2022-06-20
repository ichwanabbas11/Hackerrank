#include <iostream>
	
using namespace std;
	
int main(){

	int count,bribe = 0,Amount;
	int** queue;
	int* temp;

	cin >> Amount;	
	queue = new int*[Amount];
	temp = new int[Amount];

	for (int b = 0; b < Amount; b++){

		cin >> count;
		queue[b] = new int[count];

		for (int i = 0; i < count; i++){
			cin >> queue[b][i];
		}
		for (int i = 1; i <= count; i++){

			for (int a = i; a < count; a++){
		
				if(queue[b][a] == i && a == i){
					bribe++;
				}
				else if(queue[b][a] == i && (a - i) > 0){
					bribe = 0;
					goto oke;
				}
			}											
		}
		oke:
		temp[b] = bribe;
		bribe = 0;
	}
		
	for (int i = 0; i < Amount; i++){

		if(temp[i] != 0){
			cout << temp[i] << endl;
		}
		else{
			cout << "Too chaotic" << endl;
		}
	}
	return 0;
}