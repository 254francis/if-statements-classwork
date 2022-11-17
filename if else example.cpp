#include<iostream>
using namespace std;
int main(){
int age;
cout<<"Please Enter the age: ";
cin>>age;

if (age>=4){ //Logical question
cout<<"Admitted! Proceed to Registration"<<endl; //logical if true
}
else{
    cout<<"Declined! Minimum age not reached"<<endl; // logical if false
}
return 0;
}
