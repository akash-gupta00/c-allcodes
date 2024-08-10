#include<iostream>
using namespace std;
int main(){
    int length=0;
    int breadth=0;
    cout << "Enter the length of rectangele"<< "\n";
    cin >> length;
    cout << "Enter the breadth of rectangele"<< "\n";
    cin >> breadth;
    int area = length * breadth;
    int perimeter = 2 * (length * breadth);
    cout << "Area = " << area <<"\n";
    cout << "perimeter = " << perimeter <<"\n";
     return 0;
    

}