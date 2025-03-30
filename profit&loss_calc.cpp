#include<iostream>
using namespace std;
int main(){
    float purchase_amount,sales_amount,net_profit,loss;
    cout<<"enter a product purchaseing amount:- ";
    cin>>purchase_amount;
    cout<<"enter a product selling amount:- ";
    cin>>sales_amount;
    if(purchase_amount>sales_amount){
        loss=purchase_amount-sales_amount;
        cout<<"loss is a:- "<<loss;
    }
    else if(purchase_amount<sales_amount){
        net_profit=sales_amount-purchase_amount;
        cout<<"profit is a :- "<<net_profit;
    }
    else{
        cout<<"not profit & not loos ";
    }
}