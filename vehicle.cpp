#include<iostream>
using namespace std;
int main(){
    int speed;
    cout << " Enter the speed  of vehicle \n";
    cin >> speed;

    
    if ( speed<20 ){
        cout << "To slow\n";
    }
    else if (speed>80){
        cout <<"To fast\n";

    }
     else{
        cout<< "Drive safe =\n";
     }
        

    
        
      return 0;
}
