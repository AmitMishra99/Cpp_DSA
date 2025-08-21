#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter a array Elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Sum of Elements : ";
    int sum =0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<sum<<endl;
}