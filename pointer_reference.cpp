#include<iostream>
using namespace std;
int main(){
    string name="aman";
    // string &newname=name;// reference example
    // cout<<newname;
    string* ptr=&name;//pointer example
    cout<<*ptr;

}