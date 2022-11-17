#include<iostream>
using namespace std;
int main(){
int age;
string interest;
string name;

cout<<"Please Enter Child's Name:";
cout<<"Please Enter the age: ";
getline(cin,name);
cin>>age;

if (age>=4&&age<=10){ //Logical question
cout<<"Enter Interest";
cin>>interest;
if (interest == "soccer"){
cout <<"Admit and Assign to soccer group";
}
else if (interest == "art"){
    cout<<"Admit and assign to art";
}
else{
    cout<<"Admit to other group";
}}
else{
    cout<<"Admission Unsuccesfull.Age input is Invalid";
}
return 0;
}