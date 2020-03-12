#include <iostream>
using namespace std;

int main(){

    string N;
    int x;
    cin >> x;
    for (int i = 0; i < x; ++i)
    {    int y = 0;
        cin >> N;
        while(N[y] != '\0'){
            cout << N[y];
            y +=2;
        }cout << " ";
        y = 1;
        while(N[y] != '\0'){
            cout << N[y];
            y +=2;
        }cout << endl;
        for (int a = 0; N[a] != '\0'; a++) {
            N[a] = '\0';
        }

    } 
  

    return 0;
}
