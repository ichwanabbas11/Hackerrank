#include <iostream>
#include <string>

using namespace std;

int main(){
    int Panjang_a,Panjang_b,x = 0;
    string a,b;
    getline(cin,a);
    getline(cin,b);

    Panjang_a = a.length();
    Panjang_b = b.length();

    for (int i = 0; i < a.length(); ++i)
    {
        for (int z = 0; z < b.length(); ++z)
        {
            if(a[i] == b[z])
            {
                x++;
                b[z] = '\0';
                break;
            }            
        }
    }
    Panjang_a = Panjang_a - x;
    Panjang_b = Panjang_b - x;
    cout << Panjang_a + Panjang_b << endl;

    return 0;
}
