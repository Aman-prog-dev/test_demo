#include<iostream>
using namespace std;
int main(){
    float amount,pv,rate,time,compound_intrest;
    cout<<"enter a princple amount:- ";
    cin>>pv;
    cout<<"enter a duartion of pv:- ";
    cin>>time;
    cout<<"enter a pv rate amount:- ";
    cin>>rate;
    amount=(pv*(1+rate/100)/time);
    cout<<"This amount is a :- "<<amount<<endl;
    compound_intrest=pv-amount;
    cout<<"This cmpound inetrest is a :- "<<compound_intrest;
}