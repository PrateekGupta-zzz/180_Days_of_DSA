#include <iostream>
using namespace std;

int main(){
    // Write C++ code here
    int num;
    cout << "Enter a number: ";
    cin >> num;
    for(int i=1;i<=num;i+=1){
        if(i%4==0){
            cout << i<<endl;
        }
    }
}
