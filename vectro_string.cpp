#include<iostream>
#include<vector> //vector used to resizable multiple element of area
using namespace std;
int main(){
    vector<string> bike={"hero honda","tvs","honda","bmw"};
    for(string bikes:bike){
        cout<<bikes<<endl;
        cout<<bikes.at(1);//use all data spacific index to next element
    }
}