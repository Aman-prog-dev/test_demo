#include<iostream>
#include<list>//it is similar to vector in list
using namespace std;
int main(){
    list<string> car={"maruti","hydra","honda"};
    car.push_back("royals");
    for(string cars:car){
        cout<<cars<<endl;
    }
}