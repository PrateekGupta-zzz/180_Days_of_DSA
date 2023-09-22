#include <iostream>
using namespace std;
int main(){
    int a, b, diff;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    if(a>b){
        diff = a-b;
    } else {
        diff = b-a;
    };
    cout << diff;
};
