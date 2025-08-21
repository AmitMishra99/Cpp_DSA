#include<iostream>
#include<vector>
using namespace std;
int main(){

        vector<int>vec(3,0);

        vector<int>vec1 = {1,2,3,4,5,6};
        vec1.push_back(10);
        vec1.push_back(10);
        vec1.push_back(10);
        vec1.push_back(10);
        vec1.push_back(10);
        vec1.push_back(10);
        vec1.push_back(10);
      

        vector<int>vec2; 
        vec2.push_back(10);
        vec2.push_back(20);
        vec2.push_back(30);
        vec2.push_back(40);
        vec2.push_back(50);
        vec2.push_back(60);

        
        // Taking Input from the user
        int m;
        cin>>m;
        vector<int>vec3; 
        for(int i=0;i<m;i++){
                int x;
                cin>>x;
                vec3.push_back(x);
        }
      


        cout<<"Printing Elements : ";
        for(int i=0;i<vec1.size();i++){
                cout<<vec1[i]<<" ";
        }
        cout<<endl;
        cout<<vec1.capacity()<<endl;
        cout<<vec1.size();
}