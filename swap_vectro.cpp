#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string> color={"red","blue","green","orange"};
    vector<string> color1={"mango","blackberry","sunflower","delta"};
    color.swap(color1);
    for(string col:color){
        cout<<col<<endl;
    }
    
}