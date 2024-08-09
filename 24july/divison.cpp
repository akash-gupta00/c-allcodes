#include<iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter the number" <<"\n";
    cin >> number;
    if(number % 2 == 0 && number % 3== 0){
     cout << "Divisible by 2 and 3" <<"\n";
    }
    else if(number % 2 == 0 && number % 3 != 0){
     cout << "Divisible by 2 but not  3" <<"\n";
    }
     else if(number % 2 != 0 && number % 3 == 0){
     cout << "Divisible by 3 but not  2" <<"\n";
    }
    else{
        cout << "Not divisible by 2 or 3" <<"\n";
    }
}