#include<iostream>
using namespace std;
int main(){
    int num=12348745;
    int rev=0;
    int temp=num;
    int rem;
    while(num>0){
        rem=num%10;
        rev=(rev*10)+rem;
        num/=10;
    }
    cout<<rev;
}