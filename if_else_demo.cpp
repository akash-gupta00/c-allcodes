#include<iostream>
using namespace std;
int main(){
    int number = 0;
    cout << " Enter the integer number \n";
    cin >> number;
    if (number % 2 == 0){
        cout << "Number =" << number << "is even number \n";
  }
    else{
        cout << "Number =" << number << "is odd number \n";
  }
}
