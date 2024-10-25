#include<iostream>
using namespace std;

class Student{
    public:

    int rollNo;
    string name;

    Student(){
        rollNo = 0;
        name = "";
        cout<<"Default constructor "<< endl;
    }

    void display(){
        cout<<"Roll No.: "<< rollNo << " Name: " << name << endl;
    };
};

int main(){
    Student s1;
    s1.display();
    return 0;
}