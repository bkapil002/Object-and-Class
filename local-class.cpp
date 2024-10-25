#include<iostream>
using namespace std;

void newstudent(){
    class student{
        public:

        int rollnumber;
        string name;
        float grad;

        void setdetails(int r , string n , float g){
            rollnumber = r;
            name = n;
            grad = g;
        }

        void display(){
            cout<<"Roll No " << rollnumber<<endl;
            cout<<"Name "<< name<<endl;
            cout<<"grad "<< grad <<endl;
        }

    };
    student s;
    s.setdetails(1, "John Doe", 85.5);
    s.display();
};
int main() {
    newstudent();
    return 0;
}