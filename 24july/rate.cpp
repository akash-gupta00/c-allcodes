#include<iostream>
using namespace std;
int main(){
   int commssion_rate;
    int sales_ammount ;
    int commssion_earned ;
    cout << "Enter sales amount" <<"\n";
    cin >> sales_ammount;
     
    
    if (sales_ammount > 1&&sales_ammount <10000){

     cout <<"commission_rate: 3 %"<<endl;
    commssion_earned=(sales_ammount*3)/100;
    cout <<"commision earn : 3% =" <<commssion_earned<<endl;
         
    }
    else if (sales_ammount < 25000 && sales_ammount >10001){
    cout <<"commission_rate: 8 %"<<endl;
    commssion_earned=(sales_ammount*8)/100;
    cout <<"commision earn : 8% =" <<commssion_earned<<endl;
     }
    else if (sales_ammount < 50000&&sales_ammount >25001){
    cout <<"commission_rate: 15 %"<<endl;
     commssion_earned=(sales_ammount*15)/100;
     cout <<"commision earn : 15% =" <<commssion_earned<<endl;
   }
    else if (sales_ammount < 100000&&sales_ammount > 50001 ){
     cout <<"commission_rate: 25 %"<<endl;
     commssion_earned=(sales_ammount*25)/100;
     cout <<"commision earn : 25% =" <<commssion_earned<<endl;
    }
     else if (sales_ammount > 100001){
     cout <<"commission_rate: 35 %"<<endl;
     commssion_earned=(sales_ammount*35)/100;
     cout <<"commision earn : 35% =" <<commssion_earned<<endl;
  }
    else{
        cout <<"commission_rate";
    } 
 return 0;
}