#include<iostream>
using namespace std;
int main()
{
    int a,b,c=0,d;
    cout<<"enter any number:- ";
    cin>>a;
    d=a;
    while(a!=0)
    {
        b=a%10;
        c=c+(b*b*b);
        a=a/10;   
    }
    if(d==c)
    
        cout<<"number is amstrong";
    else
    cout<<"not amstrong:- ";
}