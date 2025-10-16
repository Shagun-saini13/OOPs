#include<iostream>
using namespace std;

// Class
class Student{
    public:
    string name;
    int age, roll_no;
    string grade;

};

int main(){

    // Class = Student(user define datatype)      Object = S1(Variable)
    Student S1;
    S1.name="Shagun";
    S1.age= 10;
    S1.roll_no= 21;
    S1.grade="A+";

    cout<<S1.age<<" "<<S1.name<<" "<<endl; //10 Shagun

    // object = S2
    Student S2;
    S2.name = "Sargam";
    S2.age = 11;
    S2.roll_no = 22;
    S2.grade = "A";

    cout<<S2.name<<" "<<S2.grade<<" "; //Sargam A
} 