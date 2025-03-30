#include <iostream>
using namespace std;
int main()
{
    int num = 10, even, odd;
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            even = i;
            cout << "even is a:- " << even << endl;
        }
        else
        {
            odd = i;
            cout << "odd is a:- " << odd << " ";
        }
    }
}