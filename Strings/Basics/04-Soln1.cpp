#include<iostream>
#include<string>
using namespace std;
int main(){
        
        int arr[] = { 12 , 223 , 423256 , 18222 , 940 , 290 };
        int n = sizeof(arr)/sizeof(arr[0]);

        int max = 0;
        int count = 0;


        for(int i=0;i<n;i++ ){
               string str =  to_string(arr[i]);
               int size = str.size();
               if(max<size) max = size;
        }

        cout<<max;


      

        


     

}