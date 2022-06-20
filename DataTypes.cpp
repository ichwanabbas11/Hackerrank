#include <iostream>

using namespace std;

int main() {

	int row,queries,x = 0,NumberOfValue;
	int* temp;
   	int** data;
   	cin >> row; 
   	cin >> queries;
   	data = new int*[row];

   	while(x < row){
   		cin >> NumberOfValue;
   		data[x] = new int[NumberOfValue]; 
   		for(int a = 0; a < NumberOfValue; a++){
   			cin >> data[x][a];
   		}
   		x++;
   	}
  	x = 0;
   	int q,r;
   	temp = new int[queries];
   	while(x < queries){
   		cin >> q; cin >> r;
   		temp[x] = data[q][r];
   		x++;
   	}
   	int out = 0;
   	while(out < x){
   		cout << temp[out] << endl;
   		out++;
   	}
   	delete[] temp;
   	delete[] data;

    return 0;
}
