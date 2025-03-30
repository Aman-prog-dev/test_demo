#include<iostream>
#include<string.h>
using namespace std;
 main(){  
   int data1,data2,choise;
   cout<<"enter a any number:- ";
   cin>>data1;
      cout<<"enter a any number:- ";
   cin>>data2;
   cout<<"enter a choise to plus(1), minus(2) ,mul(3) ,div(4) ,mod(5) ?:- ";
   cin>>choise;
   switch(choise){
    case 1: 
        cout<<data1+data2;
        break;
    case 2: 
        cout<<data1-data2;
        break;
    case 3: 
        cout<<data1*data2;
        break;
    case 4: 
        cout<<data1/data2;
        break;
    case 5:
        cout<<data1%data2;
        break;
    default:
        cout<<"enter the choise correct option again..";
   }
}