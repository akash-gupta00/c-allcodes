     #include<iostream>
using namespace std;
int main(){
    float marks1;
     float marks2;
    float marks3;
    cout << " Enter the marks1 \n";
    cin >> marks1;
    cout << " Enter the marks2  \n";
    cin >> marks2;
    cout << " Enter the marks3  \n";
    cin >> marks3;
    float total_marks= marks1 + marks2 +marks3;
    float percentage = (total_marks /300) *100;

    
    if (percentage>=90){
        cout << "grade a\n";
    }
    else if (percentage>=89){
        cout <<"Grade b =\n";

    }
     else if(percentage>=79){
        cout << "Grade c =\n";
     }
      else if(percentage>=69){
        cout << " Grade D=\n";
      } 
      else if(percentage>=59){
        cout << "not obtainted\n";
      }

cout <<"Percentage:" << percentage <<"%"<< endl;
cout << "Grade:" <<grade <<endl;
    
        
      return 0;
}
