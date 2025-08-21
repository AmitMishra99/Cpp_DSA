#include<iostream>
#include<vector>
#include<algorithm>
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
        bool flag = true;
        for(int i=0;i<n;i++){
                if(arr[i]>arr[i+1]){
                        flag = false;
                        break;
                }
        }
        if(flag == false)  cout<<"unsorted array";
        else cout<<"sorted array";
}
               
