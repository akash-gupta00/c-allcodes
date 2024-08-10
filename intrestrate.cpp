#include<iostream>
using namespace std;
int main(){
    double balance;
    double annualintrestrate;
    cout << "Enter the balance: ";
    cin >> balance;
    cout << "Enter the annual intrest rate:";
    cin >> annualintrestrate;  
    double intrest = balance * annualintrestrate/12/100;
    cout << "Intrest for the next month:" << intrest<<endl;
    return 0;
}
