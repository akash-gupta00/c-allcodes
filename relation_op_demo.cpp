#include<iostream>
using namespace std;
int main(){
    bool is_active = false;
    bool is_online = true;
    cout << "is active ="<< is_active <<"\n";
    cout << " is online ="<< is_online <<"\n";
    int num1 = 10;
    int num2 = 20;
    int num3 = 8;
    bool num1_is_greater_than_num2 = num1 > num2;
    bool num1_is_greater_than_num3 = num1 > num2;
    bool num1_is_greater_than_both_ = num1 > num2 || num1 > num3;
    cout << "num1_is_greater_than_num2 = "<<num1_is_greater_than_num2 <<"\n";
    cout << "num1_is_greater_than_num3 = "<<num1_is_greater_than_num3 <<"\n";
    cout << "num1_is_greater_than_both_ = "<< num1_is_greater_than_both_ <<"\n";
    return 0;


}