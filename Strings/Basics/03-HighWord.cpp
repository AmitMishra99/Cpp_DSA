#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
        
        vector<string>s;
        string str = "Raghav sir  is a Best sir a for DSA sir  Subject sir";
        stringstream ss(str);
        string temp ;

        while(ss>>temp){
                s.push_back(temp);
        }
        sort(s.begin() , s.end());

        int max = 0;
        string high;
        int count = 1;


        for(int i=0;i<s.size()-1;i++ ){
                if(s[i]==s[i+1]){
                        count++;
                        if(max<=count) {
                                max = count;
                                high = s[i];
                        }
                }
                else{
                        count = 1;
                }
        }

        cout<<high;


      

        


     

}