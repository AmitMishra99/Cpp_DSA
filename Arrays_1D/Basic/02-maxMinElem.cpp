#include<iostream>
#include<climits>
using namespace std;

int main(){

    int arr[] = {12,34,52,122,34,23,5,7,30};
    int n= sizeof(arr)/sizeof(arr[0]);
    int max = INT_MIN;
    int min = INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i]>max) max = arr[i];
        if(arr[i]<min) min = arr[i];
    }
    cout<<max<<endl;
    cout<<min;


}