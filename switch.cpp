#include <iostream>
using namespace std;
int main()
{
    int week_num;
    cout << "week number 0 to 6:-";
    cin >> week_num;
    switch (week_num)
    {
    case 0:
        cout << "sunday";
        break;
    case 1:
        cout << "monday";
        break;
    case 2:
        cout << "tuesday";
        break;
    case 3:
        cout << "wednesday";
        break;
    case 4:
        cout << "thursday";
        break;
    case 5:
        cout << "friday";
        break;
    case 6:
        cout << "satuarday";
        break;
    default:
        cout << "not a week num";
        break;
    }
}