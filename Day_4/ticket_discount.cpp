#include <iostream>
using namespace std;

int main(){
    // Write C++ code here
    int age;
    cout << "Enter your age: ";
    cin >> age;
    
    if(age<13 and age >65){
        cout << "Discount not applicable...";
    }
    else{
        cout << "Discount applicable...";
    }
}
