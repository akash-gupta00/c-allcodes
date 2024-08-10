#include<iostream>
using namespace std;
int main(){
     double mass;
     double initial_tempreature;
     double final_tempreature;
     double energy_needed;
     cout<< "Enter the mass of water in kilogram: =";
     cin >> mass;
     cout<< "Enter the initial tempreature of water in celcius: =";
     cin >> initial_tempreature;
     cout<< "Enter the final tempreature of water in celcius: =";
     cin >> final_tempreature;
    energy_needed= mass * (final_tempreature - initial_tempreature) * 4184;
    cout << "energy needed to heat the water: = "<< energy_needed ;
    return 0;
}    