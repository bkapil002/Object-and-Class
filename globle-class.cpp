#include<iostream>
using namespace std;

class Student{
    public:
    int rollnumber;
    string name;
    float marks;

    void setDetails(int r , string n , float g){
        rollnumber = r;
        name = n;
        marks = g;
    }

    void displayDetails(){
        cout << "Roll Number: " << rollnumber << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    void setDispalyData(Student r){
        cout<<"THE STUDENT DETAILS"<<endl;
        r.displayDetails();
    }
};
int main() {
     
     Student s;

     s.setDetails(1, "John Doe", 85.5);
     cout<<"Displaying details from the main function: "<<endl;
     s.displayDetails();
     s.setDispalyData(s);

     return 0; 
}