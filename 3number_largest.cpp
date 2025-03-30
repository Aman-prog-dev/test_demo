#include<iostream>
using namespace std;
int main(){
    int a=80,b=10,c=10;
    if(a>b & a>c){
        cout<<"a is biggest number.";
    }
    else if(b>a & b>c){
        cout<<"b is biggest number.";
    }
    else if(c>a & c>b){
        cout<<"c is biggest number.";
    }
    else{
        cout<<"3 number is equal.";
    }
}