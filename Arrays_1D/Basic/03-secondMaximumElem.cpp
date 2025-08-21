#include<iostream>
#include<climits>
using namespace std;
int main(){

    int arr[] = {124,34,122,23,5,7,30};
    int n= sizeof(arr)/sizeof(arr[0]);
    int max = INT_MIN;
    int smax = INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>max ) max = arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>smax && arr[i]!=max) smax = arr[i];
    }
    
    cout<<max<<endl;
    cout<<smax;



}
