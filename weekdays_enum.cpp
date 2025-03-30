#include <iostream>
using namespace std;
enum weeks
{
    sunday,
    monday,
    tuesday,
    wednesday,
    friday,
    satuarday
};
int main(){
    enum weeks week = sunday;
    cout << week;
}