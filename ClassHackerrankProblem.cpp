#include <iostream>
#include <sstream>

using namespace std;

class ClassHackerrankProblem{
  private:
    int age;
    int standard;
    string FirstName;
    string LastName;

  public:
    void set_age(int umur){
      age = umur;
    }
    int get_age(){
      return age;
    }
    void set_standard(int sta){
      standard = sta;
    }
    int get_standard(){
      return standard;
    }
    void set_first_name(string pertama){
      FirstName = pertama;
    }
    string get_first_name(){
      return FirstName;
    }
    void set_last_name(string terakhir){
      LastName = terakhir;
    }
    string get_last_name(){
      return LastName;
    }
    string to_string(){
      stringstream AllIn;
      AllIn << age << "," << FirstName << "," << LastName<< "," << standard;
      return AllIn.str();
    }
  
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    ClassHackerrankProblem st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}