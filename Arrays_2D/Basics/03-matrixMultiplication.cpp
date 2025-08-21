#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter a Number of rows for 1st matrix : ";
    cin>>m;
    int n;
    cout<<"Enter a Number of Colums for 1st matrix   : ";
    cin>>n;

    int mat1[m][n];
    cout <<"Enter the elements: \n";
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>mat1[i][j];
        }
    }

    int p;
    cout<<"Enter a Number of Rows for 2nd matrix  : ";
    cin>>p;
    int q;
    cout<<"Enter a Number of Columns for 2nd matrix   : ";
    cin>>q;
    
    int mat2[p][q];
    cout << "Enter the elements: \n";
    for(int i=0;i<p;i++) {
        for(int j=0;j<q;j++) {
            cin>>mat2[i][j];
        }
    }

    int res[n][p];
    if(n==p){
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j] = 0;
                for(int k=0;k<n;k++){
                    res[i][j]+=mat1[i][k]*mat2[k][j];
                }
            }
        }
    }
    else{
    cout<<"Couldn't be multiplied ";
   }

    cout <<"Your elements are: "<<endl;
    for(int i=0;i<m;i++) {
        for(int j=0;j<q;j++) {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }

}   