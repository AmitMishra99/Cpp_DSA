#include<iostream>
#include<string>
using namespace std;
int main(){
        
        // Direct Declaration with dataType and value
        string name = "Amit Mishra";
        cout<<name;

        // Taking Input from User ( This don't work if space is given )
        string s;
        cin>>s;
        cout<<s;

        // Taking Input from User ( To Compute even Space in string )
        string s1;
        getline(cin,s1);
        cout<<s1;
        cout<<s1.length();




}