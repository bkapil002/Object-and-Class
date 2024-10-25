#include<iostream>
using namespace std;

class student{
    public:
    int rollnumber;
    string name;

    student(int r , string m ){
        rollnumber = r;
        name = m;
        cout<<"Student object created with roll number "<<rollnumber<<" and name "<<name<<endl;
    }

    void displayDetails(){
        cout<<"Roll number: "<<rollnumber<<endl;
        cout<<"Name: "<<name<<endl;
    }
};

int main(){
    student s1(101, "brahm");
    s1.displayDetails();
}