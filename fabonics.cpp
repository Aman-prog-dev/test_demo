#include<iostream>
using namespace std;
int main()
{
    int a,b=1,c=0,d;
    cout<<"enter a any numaber: -";
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        cout<<c<<" ";
        d=b;
        b=c;
        c=d+b;
    }
    return 0;
}