#include <iostream>

using namespace std;

int main(){

	int* value;
	int total, n = 0, b = 0,i;

	cin >> total;
	value = new int[total];

	for(i = 0; i < total; i++){
		cin >> value[i];
	}
	while(n < total - 1){

		if(value[n+2] == 0){
			n = n + 2;
			b++;
		}
		else if(value[n+1] == 0){
			b++;
			n = n + 1;
		}
	}
	cout << b;


	return 0;
}