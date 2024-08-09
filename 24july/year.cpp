#include<iostream>
using namespace std;
int main(){
    int year;
    cout << "Enter the year" <<"\n";
    cin >> year;
    bool leap= false;
    if (year % 4 == 0){
     leap = true;
      cout << year <<"is a leap year" <<endl;
    }
    else{
        cout << year <<"is not a leap year" <<endl;
    }
}