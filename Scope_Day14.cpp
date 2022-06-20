#include <vector>
#include <iostream>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

    Difference(vector<int>& vect)
    :elements(vect){

    };
    int oke = 0;
    void computeDifference(){
        int diff;
        for(int i = 0; i < elements.size(); i++){

            for(int a = i + 1; a < elements.size(); a++){
                diff = elements[a] - elements[i];
                if(diff < 0){
                    diff *= -1;
                }
                if(oke < diff){
                    oke = diff;
                }
            }
        }
        maximumDifference = oke;
    }
}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}