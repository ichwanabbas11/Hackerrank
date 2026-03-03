// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>

using namespace std;


int main() {
    int n;
    
    cin >> n;
    vector<int> P(n+1);
    
    for (int x = 1; x <= n; x++){
        cin >> P[x];
    }
    
    
    for (int x = 1; x <= n; x++){
        
       for (int y = 1; y <= n; y++){
          if (x == P[P[y]]){
                cout << y << endl;
            }
        }
        
    } 
    return 0;
}
