#include <iostream>
#include <vector>

using namespace std;

class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}	
};
    
class Student : public Person{
	private:
		vector<int> testScores;  

	public:
        Student (string firstName_, string lastName_, int identification_, vector<int> testScores_) 
        : Person(firstName_, lastName_, identification_), testScores(testScores_)
        {
            
        }

        char calculate(){
			int average = 0;
			char letterGrade = '?';
			for (int i = 0; i < testScores.size(); ++i){
				average = average + testScores[i];
			}

			average = average / testScores.size();

			if (average >= 90 && average <= 100)
			{
				letterGrade = 'O';
			}
			else if (average >= 80 && average < 90)
			{
				letterGrade = 'E';
			}
			else if (average >= 70 && average < 80)
			{
				letterGrade = 'A';
			}
			else if (average >= 55 && average < 70)
			{
				letterGrade = 'P';
			}
			else if (average >= 40 && average < 55)
			{
				letterGrade = 'D';
			}
			else{
				letterGrade = 'T';
			}
			return letterGrade;
	}
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}