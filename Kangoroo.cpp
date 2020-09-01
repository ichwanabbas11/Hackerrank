#include <iostream>

using namespace std;

int main()
{

	int x1,v1,x2,v2;

	cin >> x1 >> v1 >> x2 >> v2;

	if ((x1 > x2 and v2 > v1) or (x2 > x1 and v1 > v2))
	{	
		if ((x2-x1)%(v1-v2) == 0)
		{
			cout << "YES";
		}
		else{
			cout << "NO";
		}
	}
	else if (x1 == x2 and v1 == v2){
		cout << "YES";
	}
	else{
		cout << "NO";
	}

	return 0;
}