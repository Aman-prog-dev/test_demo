#include<iostream>
using namespace std;

int main(){
    int account_number=123456,password=1234;
    int acc,pass,option,log,widthraw,deposite,current_amount=1000,update_password;
    cout<<"enter a account number:- ";
    cin>>acc;
    cout<<"enter a password:- ";
    cin>>pass;
    if(account_number==acc && password==pass){
        cout<<"login sucessful!!";
    }
    else if(account_number!=acc|| password!=pass){
        cout<<"try again one time"<<endl;
        cout<<"enter a account number:- ";
        cin>>acc;
        cout<<"enter a password:- ";
        cin>>pass;
        if(account_number==acc && password==pass){
            cout<<"login sucessfuly";
        }
        else{
            cout<<"not login";
        }
    }
    cout<<"choise:- \n 1.Deposite\n 2.Withraw \n 3.Balance_Check \n 4.Password_changes\n 5.Exit\n enter a option:-\n";
    cin>>option;
    if(option==1){
        cout<<"enter a deposite amount:- ";
        cin>>deposite;
        current_amount+=deposite;
        cout<<"Your current balance is a :- "<<current_amount;
    }
    else if(option==2){
        cout<<"Enter a Withraw Amount:- ";
        cin>>widthraw;
        current_amount-=widthraw;
        cout<<"current Balance is a :- "<<current_amount;
    }
    else if(option==3){
        cout<<current_amount;
    }
    else if(option==4){
        cout<<"enter a current password:- ";
        cin>>password;
        cout<<"enter a new password:- ";
        update_password=password;
        cin>>update_password;
        cout<<"Your password is a updated!!";
    }
    else if(option==5){
        cout<<"thank you!!!";
    }
    else{
        cout<<"your choise is a incorrect!!";
    }
}