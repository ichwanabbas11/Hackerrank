#include <iostream>

using namespace std;

int main(){
    
int obstacle, k, heigh, x=0;

cin >> obstacle >> k;

    for(int i = 0; i < obstacle; i++){
        cin >> heigh;
        if(heigh > x){
            x = heigh;
        }
    }
    if(x > k){
    cout << x - k;
    }
    else{
    cout << 0;
    }
    return 0;
}
