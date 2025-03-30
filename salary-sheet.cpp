#include<iostream>
using namespace std;
int main(){
    int basic_pay,da,hra,tpt,rashion,washing,education,gross,pf,esi,total_dudcution,netsalary,yearly_salary,tax;
    cout<<"enter a basic pay:- ";
    cin>>basic_pay;
    cout<<"Dearness_allow.:- "<<basic_pay*24/100<<'\n';
    cout<<"House-Rent_allow.:- "<<basic_pay*30/100<<'\n';
    cout<<"Transport_allow.:- "<<3200<<'\n';
    cout<<"Rashion_money:- "<<99*30<<'\n';
    cout<<"Washing_allow.:- "<<90<<'\n';
    cout<<"Education_allow:- "<<1250<<'\n';
    cout<<"Gross_pay:- "<<basic_pay+(da+hra+tpt+rashion+washing+education<<'\n';
    cout<<"Providended_fund:- "<<gross*12/100<<'\n';
    cout<<"Employ_state_insurence:- "<<gross*2/100<<'\n';
    cout<<"Total_deduction:- "<<pf+esi<<'\n';
    cout<<"Net salary:- "<<gross-total_dudcution<<'\n';
    cout<<"Yearly_salary:- "<<netsalary*12<<'\n';
    if(netsalary>1000000){
        tax=(netsalary-1000000)*30/100+125000;
        cout<<"Income_tax:- "<<tax;
    }
    else if(netsalary>500000){
        tax=(netsalary-500000)*20/100+100000;
        cout<<"Income_tax:- "<<tax;
    }
    else if(netsalary>250000){
        tax=(netsalary-250000)*10/100;
        cout<<"Income_tax:- "<<tax;
    }
    else{
        cout<<"not tax";
    }

}