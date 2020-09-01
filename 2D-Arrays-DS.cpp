#include <iostream>

using namespace std;

int main(){

	int kolom = 6,baris = 6,temp;
	int** arr;
	arr = new int*[baris];
	for(int i = 0; i < baris; i++){

		arr[i] = new int[kolom];

		for (int a = 0; a < kolom; a++){

			cin >> arr[i][a];
		}
	}
	int x = 0, z = 1,nilai_terbesar = 100;
	for(int i = 1; i <= (baris - 2) * (kolom - 2); i++){

		temp = arr[z][x+1] + (arr[z-1][x] + arr[z-1][x+1] + arr[z-1][x+2]) + (arr[z+1][x] + arr[z+1][x+1] + arr[z+1][x+2]);
		
		if (i % (kolom - 2) == 0){
			z++;
			x = -1;
		}
		if (temp > nilai_terbesar || nilai_terbesar == 100)
		{
			nilai_terbesar = temp;
		}
		x++;
	}
	cout << nilai_terbesar;
	return 0;
}