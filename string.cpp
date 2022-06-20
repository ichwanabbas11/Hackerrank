#include <iostream>
#include <string>
using namespace std;

int main(){
	long long panjang,n,sisa,a = 0,bagi;
	string kalimat;

	cin >> kalimat;
	cin >> n;

	panjang = kalimat.length();
	bagi = n / panjang;
	sisa = n % panjang;
	for (long long i = 0; i < panjang; i++)
	{
		if(kalimat[i] == 'a'){a++;}
	}
	a = a * bagi;
	for (long long i = 0; i < sisa; i++)
	{
		if(kalimat[i] == 'a'){a++;}
	}
	cout << a;


	return 0;
}