#include<iostream>
using namespace std;

class student{
    public:

    int rollnumber;
    string name;
    int age;
    float marks;


    void display(){
        cout<<"Roll No.: "<<rollnumber<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
int main(){
    student s;

    s.name = "Brahm kapil";
    s.rollnumber = 55;
    s.age = 22;
    s.marks = 85.5;
    s.display();
    return 0;
}