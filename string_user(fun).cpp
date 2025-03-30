#include<iostream>
using namespace std;
void abc(){
    int a=10;
    static int b=10;
    cout<<a<<ends<<b<<endl;
    ++a,++b;
}
int main(){
    abc();
    return;
}
