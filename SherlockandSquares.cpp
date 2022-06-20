#include <iostream>
#include <cmath>
using namespace std;

int main(){

	int q,out = 0;
	int a,b; 
	cin >> q;
	for (int i = 0; i < q; ++i)
	{		
		cin >> a >> b;
		int temp = (int)sqrt(a);
		if (temp*temp < a)
		{
			temp++;

		}
		while(temp*temp >= a and temp*temp <= b){
			out++;
			temp++;

		}
		cout << out << endl;
		out = 0;
	}
	return 0;
}