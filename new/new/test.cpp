#include <iostream>
using namespace std;

class Student{
private:
	char *name;
public:
	Student(){
		cout << "name = NULL" << endl;
	}
	void set(char *string){
		name = string;
	}
	void get(){
		cout << "name = " << name << endl;
	}
	~Student(){
		cout << "name = NULL" << endl;
	}
};

int main()
{
	cout << "hello new_test!" << endl;
	Student *ming = new Student;

	char *string = "anton";
	ming->Student::set(string);
	ming->Student::get();

	delete ming;
	while(1);

	return 0;
}