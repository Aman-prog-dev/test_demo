#include <iostream>
using namespace std;
int main()
{
    int salary, tax;
    cout << "enter a yearly salary:- ";
    cin >> salary;
    if (salary > 1000000)
    {
        tax = (salary - 1000000) * 30 / 100 + 125000;
        cout << tax;
    }
    else if (salary > 500000)
    {
        tax = (salary - 500000) * 20 / 100 + 100000;
        cout << tax;
    }
    else if (salary > 250000)
    {
        tax = (salary - 250000) * 10 / 100;
        cout << tax;
    }
    else
    {
        cout << "not tax";
    }
}