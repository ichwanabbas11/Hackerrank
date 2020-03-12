#include <iostream>
#include <vector>
using namespace std;

int main(){	

	int x,y;
	vector<int> vect;
	cin>>x;
	y = x % 2;
	vect.push_back(y);
	while(x != 0){
		if (x != 0){

			x = x / 2;
			y = x % 2;
			vect.push_back(y);
		}
		
	}
	int temp = 0,d = 0;
	for (int i = 0; i < vect.size(); ++i){

		if(vect[i] == 1){
			d++;
		}
		else{
			if (d > temp){
				temp = d;
			}
			d = 0;
		}
	}
	cout << temp << endl;


    return 0;
}
