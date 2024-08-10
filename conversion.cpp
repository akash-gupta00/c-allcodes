#include<iostream>
using namespace std;
int main(){
    double celcius =0.0;
    cout << "Enter the temprature value in degree celcius " <<"\n";
    cin >> celcius;
    double faherenheit = (9.0 / 5) * celcius + 32;
    cout <<"faherenheit = " << faherenheit <<endl;
    return 0;
}
