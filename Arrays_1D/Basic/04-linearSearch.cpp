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

    int x = 4;
    bool flag = false;

    cout<<"X Existence: ";
    for(int i=0;i<n;i++){
        if(x==arr[i] ){
                flag = true;
                break;
       }
}
 if (flag==false) cout<<"False";
       else cout<<"True";


}