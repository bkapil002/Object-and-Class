#include<iostream>
using namespace std;

inline int square(int i){
    return i * i;
} 

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout<<"square"<<num<<"square value: "<<square(num)<<endl;

    return 0;
}