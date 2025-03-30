#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number:- ";
    cin>>num;
    int count=0;
    while(num!=0){
        num/=10;
        count++;
    }
    cout<<"number lenght is a:- "<<count;
}