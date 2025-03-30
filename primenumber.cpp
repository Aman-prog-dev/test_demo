#include <iostream>
using namespace std;
int main()
{
    int num = 32, count = 0;
    if (num <= 1)
    {
        cout << "not a prime";
    }
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            count += 1;
        }
    }
    if (count > 1)
    {
        cout << "not a prime";
    }
    else
    {
        cout << "prime number";
    }
}