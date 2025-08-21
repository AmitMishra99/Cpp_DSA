#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main(){

    int arr[] = {12,34,52,122,34,23,5,7,30};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    // Method - 1 :- O(n) whole loop iteration 

    // Method - 2 :- O(n) 
    // reverse(arr , arr+n);  

    // Method - 3 :- O(n/2) Two ptr approach

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    

}