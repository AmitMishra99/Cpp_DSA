#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
        
        // Direct Declaration with dataType and value
        string name = "Amit";
        string name1 = "timA";
        sort(name.begin() , name.end());
       sort(name1.begin() , name1.end());
        if(name==name1)  cout<<1;
        else cout<<0;




}