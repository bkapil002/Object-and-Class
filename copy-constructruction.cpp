#include<iostream>
using namespace std;

class Student{
    public:
    int rollNo;
    string name;
    Student(int r, string n){
        rollNo = r;
        name = n;
        cout<<"constructor called" << endl;
    }

    Student(const Student &s){
        rollNo = s.rollNo;
        name = s.name;
        cout<<"copy constructor called" << endl;
    }

    void displayDetails(){
        cout<<"Roll No.: "<< rollNo << endl;
        cout<<"Name: " << name << endl;
    }
};


int main(){
    Student s1(11 , "brham");
    Student s2 = s1;

    s1.displayDetails();
    s2.displayDetails();

    return 0;
}
