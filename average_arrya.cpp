#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};int sum=0,avg=0;
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<=len;i++){
        sum+=i;
    }
    cout<<"arrya num is a sum:- "<<sum<<endl;
    avg=sum/len;
    cout<<"arrya num is average:- "<<avg;
}