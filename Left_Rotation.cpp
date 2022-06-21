#include <iostream>

using namespace std;

int main(){
	int* nilai_2;
	int* nilai;
	int n,Step_Left,temp,temp_2;

	cin >> n;
	cin >> Step_Left;
	nilai = new int[n+1];
	nilai_2 = new int[n+1];
	for (int i = 1; i <= n; i++)
	{
		cin >> nilai[i];
	}
	
	for (int i = 1; i <= n ; i++)
	{
		if (Step_Left > n)
		{
			if ((Step_Left % n) > (i - 1))
			{	
				nilai_2[(i + n) - (Step_Left % n)] = nilai[i];
			}
			else
			{				
				nilai_2[i - (Step_Left % n)] = nilai[i];
			}
		}
		else if (Step_Left < n)
		{
			if (Step_Left > i - 1)
			{	
				nilai_2[(i + n) - Step_Left] = nilai[i];
			}
			else {
				
				nilai_2[i - Step_Left] = nilai[i];
			}
		}
		else if(Step_Left == n){
			break;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		cout << nilai_2[i] << " ";
	}
	delete[] nilai,nilai_2;
	return 0;
}
