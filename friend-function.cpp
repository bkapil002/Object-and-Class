#include<iostream>
using namespace std;

class Student{
    private:
    int rollnumber;
    string name;

    public:
    Student(int r , string n ){
        rollnumber = r;
        name = n;
    }

    friend void displayDetails(Student s);
};

void displayDetails(Student s){
    cout << "Roll Number: " << s.rollnumber << endl;
    cout << "Name: " << s.name << endl;
}
int main(){
 Student s(12 , "brham kapila");
 displayDetails(s);
 return 0;

}