// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main(){
    // Write C++ code here
    int num;
    cout << "Enter a month_number: ";
    cin >> num;
    if(num>0 and num<13){
        if(num==1){
            cout << "January";
        }
        else if(num==2){
            cout << "February";
        }
        else if(num==3){
            cout << "March";
        }
        else if(num==4){
            cout << "April";
        }
        else if(num==5){
            cout << "May";
        }
        else if(num==6){
            cout << "June";
        }
        else if(num==7){
            cout << "July";
        }
        else if(num==8){
            cout << "August";
        }
        else if(num==9){
            cout << "September";
        }
        else if(num==10){
            cout << "October";
        }
        else if(num==11){
            cout << "November";
        }
        else{
            cout << "December";
        }
    }
    else{
        cout << "Number out of range...";
    }
}
