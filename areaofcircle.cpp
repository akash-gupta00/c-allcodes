#include<iostream>
using namespace std;
int main(){
    float radius;
    cout << "Enter radius of circcle" <<"\n";
    cin >> radius;
    float area = 3.14 * radius * radius;
    float perimeter = 2 * 3.14 * radius;
    cout << "Area of circle with radius =" << area <<"\n";
    cout << "Perimeter of circle with radius =" << perimeter <<"\n";

    return 0;
}