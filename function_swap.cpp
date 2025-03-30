#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int a,b;
    cout<<"enter a number1:-  ";
    cin>>a;
    cout<<"enter a second number:- ";
    cin>>b;
    swap(a,b);
    cout<<a<<" "<<b;
}