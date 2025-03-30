#include <iostream>
using namespace std;
int main(){
    int num=4,fact=1;
    for(int i=1;i<=num;i++){
        fact*=i;
    }
    cout<<fact;
}