#include<iostream>
using namespace std;
int main(){

    int arr[] = {0,1,0,0,1,0,0,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Brute Approach - using Passes 
    int noz = 0;
    int noo = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==0) noz++;
        else noo++;
    }
   // filling the elements  
     for(int i=0;i<n-1;i++){
        if(i<noz) arr[i] = 0;
        else arr[i] = 1;
    }

    // Optimizied Approach - Two ptr method 
    // int i=0;
    // int j=n-1;
    // while(i<j){
    //     if(arr[i]==1 && arr[j]==0){
    //         swap(arr[i],arr[j]);
    //         i++;
    //         j--;
    //     }
    //     if(arr[i]==0) i++;
    //     if(arr[j]==1) j--;
    // }

    // printing the elem 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}