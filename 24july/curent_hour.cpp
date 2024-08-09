#include<iostream>
using namespace std;
int main(){
    int count_hour;
    cout <<"Enter the current hour(0-23):" <<"\n";
    cin >> count_hour;
    if (count_hour >= 5 && count_hour <=11){
        cout << "Good Morning" <<"\n";
    }
    else if (count_hour >= 12 && count_hour <=17){
        cout << "Good Afternoon" <<"\n";
    }
    else if (count_hour >= 18 && count_hour <=21){
        cout << "Good Evening" <<"\n";
    }
    else{
        cout << "Good Night";
    }
}