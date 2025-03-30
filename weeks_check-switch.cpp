#include<iostream>
using namespace std;
int main(){
    int week;
    cout<<"enter the weak number 0 - 6:- ";
    cin>>week;
    switch(week){
        case 0:
            cout<<"sunday";
            break;
        case 1:
            cout<<"monday";
            break;
        case 2:
            cout<<"tueasday";
            break;
        case 3:
            cout<<"wednesday";
            break;
        case 4:
            cout<<"thursday";
            break;
        case 5:
            cout<<"friday";
            break;
        case 6:
            cout<<"sunday";
            break;
        default:
            cout<<"enter the correct week number to again.";
    }
}