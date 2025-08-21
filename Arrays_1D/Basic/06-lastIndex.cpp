#include<iostream>
#include<vector>
using namespace std;
int main(){

        vector<int>v = {1,2,45,6,2,4,5,23,4,1,23,4,5,6,23,1,3,5};
        int x = 1;

        int idx = -1;
        for(int i=0;i<v.size();i++){
                if(v[i]==x) idx = i;
        }
        cout<<"last occuremce of given element is : "<<idx<<endl;

}