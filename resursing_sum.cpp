#include<iostream>
using namespace std;
  int sum(int i){
    if(i>0){
        return i+sum(i-1);
    }
  }
  int main(){
    int output=sum(5);
    cout<<output;
  }