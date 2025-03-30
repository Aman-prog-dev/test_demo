#include<iostream>
using namespace std;
int main(){
    int arr1[]={11,2,13,54,5,67};
    int len=sizeof(arr1)/sizeof(arr1[0]);
    int big=arr1[0];
    for(int arr:arr1){
        if(big<arr){
            big=arr;
        }
    }
    cout<<big;

}