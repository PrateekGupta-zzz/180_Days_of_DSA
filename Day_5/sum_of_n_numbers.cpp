#include <iostream>
using namespace std;
int main(){
  int sum, n;
  cout << "Enter number: ";
  cin >> n;
  sum = 0;
  for(int i=1;i<=n;i+=1){
      sum+=i;
  }
  cout<<sum;
}
