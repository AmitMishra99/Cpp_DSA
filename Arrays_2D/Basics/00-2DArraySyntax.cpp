#include<iostream>
using namespace std;
int main(){

        // Direct Declaration 
        int arr0[3][3] = {1,2,3,4,5,6,7,8,9};
        int arr1[3][3] = {{1,2,3} , {4,5,6} , {7,8,9}};

        //  Taking Inpur from User

        int m;
        cout<<"Enter a Number of rows for 1st matrix : ";
        cin>>m;
        int n;
        cout<<"Enter a Number of Colums for 1st matrix   : ";
        cin>>n;

        int arr2[m][n];
        cout <<"Enter the elements: "<<endl;
        for(int i=0;i<m;i++) {
                for(int j=0;j<n;j++) {
                cin>>arr2[i][j];
                }
        }

        //  Printing the Elements
        cout <<"Your Elements are: "<<endl;
        for(int i=0;i<m;i++) {
                for(int j=0;j<n;j++) {
               cout<<arr2[i][j]<<" ";
                }
                cout<<endl;
        } 
        cout<<endl;

        

}