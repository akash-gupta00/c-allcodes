#include<iostream>
using namespace std;
int main(){
    float  Englishmarks =0 ;
    float  Hindimarks =0;
    float  mathmarks =0;
    float  Computermarks =0;
    float  SCiencemarks =0;
    cout << " Enter the English marks ="; 
    cin >> Englishmarks;
    cout << " Enter the Hindi marks =";
    cin >> Hindimarks;
    cout << " Enter the  math marks =";
    cin >>  mathmarks;
    
    cout << " Enter the  Computer marks =";
    cin >>  Computermarks;
    
    cout << " Enter the  SCience marks =" ;
    cin >>   SCiencemarks;
    

    float total_marks= Englishmarks + Hindimarks + mathmarks + Computermarks + SCiencemarks;
    float percentage = (total_marks /500) *100;

    char grade;
    if (percentage>=91){
         cout << "Grade =" << "A+" <<endl;
    }
    else if (percentage>=81){
          cout << "Grade =" << "A" <<endl;

    }
    else if(percentage>=71){
         cout << "Grade =" << "B+" <<endl;
     }
    else if(percentage>=61){
          cout << "Grade =" << "B" <<endl;
      } 
    else if(percentage>=51){
          cout << "Grade =" << "c" <<endl;
      }
    else if(percentage>=41){
          cout << "Grade =" << "D" <<endl;
      }
    else if(percentage<=35){
          cout << "Grade =" <<"gress failed" <<endl;
      }    
      

      cout <<"Percentage:" << percentage <<"%"<< endl;
      return 0;
}
