#include <iostream>
using namespace std;
int main(){
  int marks;
  cout << "Enter your marks in percentage: ";
  cin >> marks;
  if(marks > 33){
    cout << "Pass";
  }
  else{
    cout << "Fail";
  };
};
