#include<iostream>
#include<stack>//stack is a used to store multiple elements lifo (last in first out)
using namespace std;
int main(){
    stack<string> names;
    names.push("mohan");
    names.push("kunal");
    names.push("lalit");
    cout<<names.top();
}