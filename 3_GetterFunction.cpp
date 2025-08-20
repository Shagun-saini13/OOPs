#include<iostream>
using namespace std;

class student{
    // By default private
    string name;
    int age, roll_no;
    string grade;

    // Setter Function
    public:
    void setname(string n){
        name = n;
    }
    void setage(int a){
        age = a;
    }
    void setroll(int r){
        roll_no = r;
    }
    void setgrade(string g){
        grade = g;
    }

    // Getter Function
    void getname(){
        cout<<name<<endl;
    }
    void getage(){
        cout<<age<<endl;
    }
    void getroll(){
        cout<<roll_no<<endl;
    }
    string get_grade(){
        return grade;
    }

};

int main(){
    student s1;
    // Setter Function call
    s1.setname("Rohit");
    s1.setage(10);
    s1.setroll(21);
    s1.setgrade("A+");

    // Getter Function call
    s1.getname();
    s1.getage();
    s1.getroll();
    cout<<s1.get_grade()<<endl;

}