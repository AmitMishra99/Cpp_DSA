#include<iostream>
using namespace std;
int main(){

        // Method - 1 { Direct Initialization with Data and it's size }
        int arr1[5] = {1,2,3,4,5};
        cout<<"Printing Elements : ";
        for(int i=0;i<5;i++){
                cout<<arr1[i]<<" ";
        }
        cout<<endl;

        // Method - 2 { Direct Initialization with Data and but size is taken as input from user }
        int n;
        cout<<"Enter a size of array : ";
        cin>>n;
        int arr2[n];
        cout<<"Enter a array Elements : ";
        for(int i=0;i<n;i++){
                cin>>arr2[i];
        }
        cout<<"Printing Elements : ";
        for(int i=0;i<n;i++){
                cout<<arr2[i]<<" ";
        }
        cout<<endl;

        // Method - 3 { Direct Initialization with Data and but size is undefined }
        int arr3[] = {12,1,23,4,5,23,235,7,856,345,65,3456,6};
        int size = sizeof(arr3)/sizeof(arr3[0]);
        cout<<"Printing Elements : ";
        for(int i=0;i<size;i++){
                cout<<arr3[i]<<" ";
        }
        cout<<endl;


}