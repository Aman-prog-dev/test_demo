#include <iostream>
using namespace std;
class employ
{
public:
    string name;
    string post;
    string city;
    string address;
    employ(string nam, string pos, string cit, string add);

};
employ::employ(string nam, string pos, string cit, string add){
        name = nam;
        post = pos;
        city = cit;
        address = add;
 }

int main()
{
    employ object1("mohan", "hr", "delhi", "palam village");
    cout<<object1.name<<object1.post<<object1.city<<object1.address;
}
