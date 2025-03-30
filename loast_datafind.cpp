#include<iostream>
using namespace std;
int main(){
    int arr[5]={11,2,13,4,15};
    int length=sizeof(arr)/sizeof(arr[0]);
    int loast=arr[0];
    for(int arr1:arr){
        if(loast<arr1){
            loast=arr1;
        }
    }
    cout<<loast;
}