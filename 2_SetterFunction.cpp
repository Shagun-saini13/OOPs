#include<iostream>
using namespace std;

class student{
    //  By default private
    string name;
    int age, roll_no;
    string grade;

    // Public setter functions inside class
    public:
    void setname(string n){
        name=n;
    }
    void setage(int a){   
        age=a;
    }
    void setroll(int r){
        roll_no=r;
    }
    void setgrade(string g){
        grade=g;
    }

};

int main(){
    student s1;
    s1.setname("Mohit");
    s1.setage(12);
    s1.setroll(22);
    s1.setgrade("A++");

}