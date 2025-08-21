#include<iostream>
using namespace std;
int main(){
    
    int m;
    cout<<"Enter a number of rows: ";
    cin>>m;
    int n;
    cout<<"Enter a number of columns  : ";
    cin>>n;

    // ---> For 1st Matrix
    int mat1[m][n];
    cout <<"Enter the elements: "<<endl;
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>mat1[i][j];
        }
    }

    // ---> For 2nd Matrix
    int mat2[m][n];
    cout << "Enter the elements: "<<endl;
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>mat2[i][j];
        }
    }

    int addition[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++) {
           addition[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    cout <<"Addition of elements is: "<<endl;
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cout<<addition[i][j]<<" ";
        }
        cout<<endl;
    }

}

  