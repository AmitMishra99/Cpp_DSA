#include<iostream>
#include<string>
using namespace std;
int main(){
        string s = "0P";

        string t = "";
        for(int i=0;i<s.size();i++){
            char ch = s[i];
            if(ch>='A' && ch<='Z'){
                t+=(ch - 'A' + 'a');
            }
            else if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
                t+=ch;
            }
            else {
                continue;
            }
        }
        cout<<t<<endl;
        int i=0;
        int j=t.size()-1;
        bool isPalindrome = true;

    while (i <= j) {
        if (t[i] != t[j]) {
            isPalindrome = false;
            break;
        }
        i++;
        j--;
    }

    cout << (isPalindrome ? "true" : "false");

}