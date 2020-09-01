#include <iostream>
using namespace std;

int main(){

    string oke;
    int x;
    cin >> x;
    for (int i = 0; i < x; ++i)
    {	int y = 0;
    	cin >> oke;
    	while(oke[y] != '\0'){
    		cout << oke[y];
    		y +=2;
    	}cout << " ";
    	y = 1;
    	while(oke[y] != '\0'){
    		cout << oke[y];
    		y +=2;
    	}cout << endl;
    	for (int a = 0; oke[a] != '\0'; a++) {
        	oke[a] = '\0';
		}

    } 
  

    return 0;
}

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) 
	{
        string str;
        cin >> str;

        for (int j = 0; j < str.length(); j++) 
		{
            if (j % 2 == 0)
            {
            	cout << str[j];
			}
        }

        cout << " ";

        for (int j = 0; j < str.length(); j++) 
		{
            if (j % 2 != 0)
            {
            	cout << str[j];
			}
        }

        cout << endl;
    }

    return 0;
}