#include<iostream>
using namespace std;
void fact(int number){
    int fact=1;
    for(int i=1;i<=number;i++){
        fact*=i;
    }
    cout<<fact;
}
int main(){
    fact(5);
}