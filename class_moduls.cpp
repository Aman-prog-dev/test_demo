#include <iostream>
using namespace std;
class car
{
public:
    string brand;
    string model;
    int year;
};
int main()
{
    car Carobject1, carobject2;
    Carobject1.brand = "bmw";
    Carobject1.model = "bm12h";
    Carobject1.year = 2001;

    carobject2.brand = "royals";
    carobject2.model = "R736J";
    Carobject1.year = 2009;
    cout << "car brand is a " << Carobject1.brand << " model is a " << Carobject1.model << " year is a " << Carobject1.year<<endl;

    cout << "car brand is a " << carobject2.brand << " model is a " << carobject2.model << " year is a " << carobject2.year;
}