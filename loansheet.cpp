#include <iostream>
using namespace std;
int main()
{
    float duration, loan_amount, roi, installment, intrest, pay_amount;
    cout << "enter the duration to loan recd.:- ";
    cin >> duration;
    cout << "enter a loan amount:- ";
    cin >> loan_amount;
    cout << "enter a rate of intrest:- ";
    cin >> roi;
    cout << "installment is a :- " << loan_amount / duration << "\n";
    cout << "intreast is a :- " << loan_amount * roi / 12 / 100 << "\n";
    cout << "pay amount is a:- " << installment + intrest;
}