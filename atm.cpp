#include<iostream>
using namespace std;
int main() {
    float balance = 6000;
    
    cout << " please enter your widhdrawl amount\n";
    int widhrawl_amount;
    cin >> widhrawl_amount;
    
    if (widhrawl_amount<=balance){
        cout <<"successfull widthdraw" <<endl;
}
if (widhrawl_amount>=balance){
    cout << "not widthdrawl";
}
}
