#include <iostream>

using namespace std;

int main()
{
	int CatA,CatB,MouseC, n;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> CatA >> CatB >> MouseC;

		if (abs(CatA - MouseC) < abs(CatB - MouseC))
		{
			cout << "Cat A" << endl;
		}
		else if (abs(CatA - MouseC) > abs(CatB - MouseC))
		{
			cout << "Cat B" << endl;
		}	
		else{
			cout << "Mouse C" << endl;
		}
	} 



	return 0;
}