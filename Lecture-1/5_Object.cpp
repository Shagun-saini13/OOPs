#include<iostream>
using namespace std;

// Size of an Object

class a{
int b; //size of int = 4 byte
char c; //size of char = 1 byte
};
int main(){
    //class a object
    a obj;
    cout<<sizeof(obj)<<endl; //Total Size-> int + char = 5 Bytes , But it print 8 Bytes Why?
    // Total Size-> int + char = 5 Bytes , But it print 8 Bytes Why? -> Due to Padding

}

////////////////////////////////////////////////////////////////

class a{
    int a; //size of int = 4 bytes
    int b;
    int c;
};
int main(){
    // class x object
    a obj;
    cout<<sizeof(obj)<<endl; //Total Size-> int + int + int = 12 bytes
}

/////////////////////////////////////////////////////////////////

// Empty Class
class a{
    // Empty Class
};
int main(){

    // class a-> Empty class
    a obj;
    cout<<sizeof(obj)<<endl;  // The sizeof an empty class in C++ is 1 byte to ensure that each object of that class has a unique address in memory.

    //Empty class size = 0 , But it print 1 byte   Why??
    // It print 1 byte Because-> When we create object of a class , object size itself is 1 Byte and this 1 byte does not hold any useful data, it's just there to make each object UNIQUELY ADDRESSABLE.

    // The sizeof(class) tells how much space one object of that class occupies

}

/////////////////////////////////////////////////////////////////////

class a{
    int b; //4 bytes
    char c; //1byte
};
int main(){
    a obj;
    cout<<sizeof(obj)<<endl; //8 bytes
    // int(4 bytes) + char(1 byte) = 5 bytes , but it's 8 bytes due to padding

    // a a a a c p p p , where p is padding
}

///////////////////////////////////////////////////////////////////////

