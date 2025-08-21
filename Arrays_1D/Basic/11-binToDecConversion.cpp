#include<iostream>
using namespace std;
int main(){

        int arr[] = {0,0,1,1};
        int n = sizeof(arr)/sizeof(arr[0]);

      int dec = 0;
      int store = 1;
      for(int i=n-1;i>=0;i--){
        dec+=arr[i]*store;
        store*=2;
      }

        cout<<dec;


}