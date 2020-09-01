#include <cstdio>
#include <vector>
#include <iostream>
#define max(a, b) (a > b ? a : b)
using namespace std;

int main(){

	int no_of_elements, no_of_operations;
    scanf("%d %d", &no_of_elements, &no_of_operations);

    vector <long long> starting(no_of_elements + 2, 0);
    while(no_of_operations--)
    {
        int left, right, k;
        scanf("%d %d %d", &left, &right, &k);

        starting[left] += k;
        starting[right + 1] -= k;
    }

    vector <long long> value(no_of_elements + 1, 0);

    for(int i = 1; i <= no_of_elements; i++)
    {
        value[i] = value[i - 1] + starting[i];
    }
    long long maximum = 0;
    for(int i = 1; i <= no_of_elements; i++)
        maximum = max(maximum, value[i]);

    printf("%lld\n", maximum);

    return 0;
}

//Punyaku
/*#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long Lebar_Array,Banyaknya_Percobaan,x = 0,a,k,Nilai_Terbesar = 0,b;
    cin >> Lebar_Array >> Banyaknya_Percobaan;
    using val_type = long long;
    vector<val_type> array(Lebar_Array);
    while(x < Banyaknya_Percobaan){

        // Memasukkan a,b dan k
        cin >> a >> b >> k;
        for(long long i = a - 1; i < b; ++i){
            array[i] = array[i] + k;
        }    
        //Mencari nilai terbesar pada tiap operasi yang ditambahkan oleh k. 
        //lalu ditampungkan ke variabel Nilai_Terbesar    
    
        for (long long i = a - 1; i < b; ++i){
            if (array[i] > Nilai_Terbesar){
                Nilai_Terbesar = array[i];
            }        
        }
        x++;
    }
  
    cout << Nilai_Terbesar;
    return 0;
}
*/