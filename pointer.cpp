#include<iostream>
using namespace std;
int main(){
    int *p;
    int a=10;
    p=&a;
    cout<<&a<<endl;    //addrees a
    cout<<p;    // pointer addrees is a
    cout<<a;    //a is value
    cout<<*p;   //pointer is a value print
}
