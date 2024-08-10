//Ram shyam were playing a game. in the first turn of the game,ravi will given an integer divinded and an integer divisor to shyam 
//then shyam has to tell him the remainder of the divison.in the second turn, shyam will repeat the procedure//

#include<iostream>
using namespace std;
int main(){
    int dividend;
    int divisor;
    cout << "Enter the dividend" <<"\n";
    cin >> dividend;
    cout << "Enter the divisor" <<"\ n";
    cin >> divisor;
    int remainder= dividend % divisor;
    cout << "The remainder is:" << remainder <<endl;
    
}