#include <iostream>

using namespace std;

int main(){

	int a,b,hasil = 0;
	int n,row_position, coloumn_position, obstacles;
	cin >> n >> obstacles;
	cin >> row_position >> coloumn_position;

	int temp[8];

	for (int i = 0; i < 8; ++i)
	{
		temp[i] = 0;
	}

	for (int i = 0; i < obstacles; ++i)
	 {
	 	cin >> a >> b;

	 	if (a == row_position and (b >= coloumn_position and b <= n))
	 	{
	 		if(temp[0] == 0 or temp[0] > b)
	 		{
	 			temp[0] = b;
	 		}			
	 	}
	 	else if(b == coloumn_position and a > row_position and a <= n){
	 		if(temp[1] == 0 or temp[1] > a)
	 		{
	 			temp[1] = a;
	 		}
	 	}
	 	else if(a == row_position and b <= coloumn_position and b >= 1){
	 		if(temp[2] == 0 or temp[2] < b)
	 		{
	 			temp[2] = b;
	 		}	
	 	}
	 	else if(b == coloumn_position and a <= row_position and a >= 1){
	 		if(temp[3] == 0 or temp[3] < a)
	 		{
	 			temp[3] = a;
	 		}		
	 	}
	 	else if(a > row_position and a <= n and b > coloumn_position and b <= n){
	 		if (temp[4] == 0 or temp[4] > a or temp[4] > b)
	 		{
	 			if (a <= b)
	 			{
	 				temp[4] = a;
	 			}
	 			else if(b < a){
	 				
	 				temp[4] = b;
	 			}
	 		}
	 	}
	 	else if(a >= 1 and a < row_position and b > coloumn_position and b <= n){

	 		if (temp[5] == 0 or temp[5] > a or temp[5] < b)
	 		{
	 			if (abs(a - row_position) <= abs(coloumn_position - b)
	 			{
	 				temp[5] = a;
	 			}
	 			else if(abs(a - row_position) > abs(coloumn_position - b))){
	 				
	 				temp[5] = b;
	 			}
	 		}
	 			
	 	}
	 	else if(a >= 1 and a < row_position and b >= 1 and b < coloumn_position){

	 		if (temp[6] == 0 or temp[6] < a or temp[6] < b)
	 		{
	 			if (abs(row_position - a) <= abs(coloumn_position - b))
	 			{
	 				temp[6] = a;
	 			}
	 			else if(abs(row_position - a) > abs(coloumn_position - b)){
	 				
	 				temp[6] = b;
	 			}
	 		}
	 	}
	 	else if(a > row_position and a <= n and b >= 1 and b < coloumn_position){

	 		if (temp[7] == 0 or temp[7] < a or temp[7] > b)
	 		{
	 			if (abs(row_position - a) <= abs(b - coloumn_position))
	 			{
	 				temp[7] = a;
	 			}
	 			else if(abs(row_position - a) > abs(b - coloumn_position)){
	 				
	 				temp[7] = b;
	 			}
	 		}
	 	}
	 } 	

	 for (int i = 0; i < 8; ++i)
	 {
	 	if (temp[i] == 0)
	 	{
	 		if(i == 0 and abs(n - row_position) != 1){
	 			hasil = hasil + abs(n - row_position);			
	 		}
	 		else if(i == 1 and abs(n - coloumn_position) != 1){
	 			hasil = hasil + abs(n - coloumn_position);	
	 		}
	 		else if(i == 2 and abs(coloumn_position - 1) != 1){
	 			hasil = hasil + abs(coloumn_position - 1);
	 		}
	 		else if(i == 3 and abs(row_position - 1) != 1){	
	 			hasil = hasil + abs(row_position - 1);
	 		}
	 		else if(i == 4 and (abs(n - row_position) != 1 or abs(n - coloumn_position) != 1)){
	 			if (abs(n - row_position) <= abs(n - coloumn_position))
	 			{
	 				hasil = hasil + abs(n - row_position);
	 			}
	 			else if (abs(n - row_position) > abs(n - coloumn_position))
	 			{
	 				hasil = hasil + abs(n - coloumn_position);
	 			}
	 		}
	 		else if(i == 5 and (abs(n - row_position) != 1 or abs(coloumn_position - 1) != 1)){

	 			if (abs(n - row_position) <= abs(coloumn_position - 1))
	 			{
	 				hasil = hasil + abs(n - row_position);
	 			}
	 			else if (abs(n - row_position) > abs(coloumn_position - 1))
	 			{
	 				hasil = hasil + abs(coloumn_position - 1);
	 			}
	 		}
	 		else if(i == 6 and (abs(coloumn_position - 1) != 1 or abs(row_position - 1) != 1)){
	 			if (abs(coloumn_position - 1) <= abs(row_position - 1))
	 			{
	 				hasil = hasil + abs(coloumn_position - 1);
	 			}
	 			else if (abs(coloumn_position - 1) > abs(row_position - 1))
	 			{
	 				hasil = hasil + (row_position - 1);
	 			}
	 		}
	 		else if(i == 7 and (n - coloumn_position != 1 or row_position - 1 != 1)){
	 			if (n - coloumn_position <= row_position - 1)
	 			{
	 				hasil = hasil + (n - coloumn_position);
	 			}
	 			else if (n - coloumn_position > row_position - 1)
	 			{
	 				hasil = hasil + (row_position - 1);
	 			}
	 		}
	 	}
	 	else{
	 		if(i == 0 and temp[i] - coloumn_position != 1){
	 			hasil = hasil + (temp[i] - coloumn_position);
	 		}
	 		else if(i == 1 and temp[i] - row_position != 1){
	 			hasil = hasil + (temp[i] - row_position);
	 		}
	 		else if(i == 2 and coloumn_position - temp[i] != 1){
	 			hasil = hasil + (coloumn_position - temp[i]);
	 		}
	 		else if(i == 3 and row_position - temp[i] != 1){
	 			hasil = hasil + (row_position - temp[i]);
	 		}
	 		else if(i == 4 and (temp[i] - row_position != 1 or temp[i] - coloumn_position != 1)){
	 			if (temp[i] - row_position <= temp[i] - coloumn_position)
	 			{
	 				hasil = hasil + (temp[i] - row_position);
	 			}
	 			else if (temp[i] - row_position > temp[i] - coloumn_position)
	 			{
	 				hasil = hasil + (temp[i] - coloumn_position);
	 			}
	 		}
	 		else if(i == 5 and (temp[i] - row_position != 1 or coloumn_position - temp[i] != 1)){
	 			if (temp[i] - row_position <= coloumn_position - temp[i])
	 			{
	 				hasil = hasil + (temp[i] - row_position);
	 			}
	 			else if (temp[i] - row_position > coloumn_position - temp[i])
	 			{
	 				hasil = hasil + (coloumn_position - temp[i]);
	 			}
	 		}
	 		else if(i == 6 and (coloumn_position - temp[i] != 1 or row_position - temp[i] != 1)){
	 			if (coloumn_position - temp[i] <= row_position - temp[i])
	 			{
	 				hasil = hasil + (coloumn_position - temp[i]);
	 			}
	 			else if (coloumn_position - temp[i] > row_position - temp[i])
	 			{
	 				hasil = hasil + row_position - temp[i];
	 			}
	 		}
	 		else if(i == 7 and (temp[i] - coloumn_position != 1 or row_position - temp[i] != 1)){
	 			if (temp[i] - coloumn_position <= row_position - temp[i])
	 			{
	 				hasil = hasil + (temp[i] - coloumn_position);
	 			}
	 			else if (temp[i] - coloumn_position > row_position - temp[i])
	 			{
	 				hasil = hasil + (row_position - temp[i]);
	 			}
	 		}
	 	}
	 }


	 cout << hasil;
	return 0;
}