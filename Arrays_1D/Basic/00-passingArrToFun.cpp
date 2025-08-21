#include<iostream>
using namespace std;
void size(int a[] , int n){
        // int size = sizeof(a)/sizeof(a[0]);   --> can't possible bcoz it is act as pointer not real array
        // cout<<size;                                 --> only updations and printing can be done 
        for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
        }

}
int main(){

        int arr [] = {1,5,6,10,3,2,5,8};
        int n = sizeof(arr)/sizeof(arr[0]);
        cout<<&arr[0]<<endl;
        cout<<&arr<<endl;
        cout<<arr<<endl;

        size(arr , n);




}