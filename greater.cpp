#include<iostream>
using namespace std;
int main(){
    int number1 = 0;
    int number2 = 0;
    cout << " Enter the first number \n";
    cin >> number1;
    cout << " Enter the second number \n";
    cin >> number2;
    if ( number1 > number2 ){
        cout <<"number1 =" << number1 <<"is greater\n";
        cout <<"number2 =" << number2 <<"is smallwer\n";
    }
     else{
        cout <<"number2 =" << number2 <<"is greater\n";
        cout <<"number1 =" << number1 <<"is smallwer\n";
     }
      return 0;
}
