#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
        
        string name = "aamittt";

        sort(name.begin() , name.end());
        cout<<name<<endl;

        int max = 0;
        string high;
        int count = 1;


        for(int i=0;i<name.size()-1;i++ ){
                if(name[i]==name[i+1]){
                        count++;
                        if(max<=count) {
                                max = count;
                                high = name[i];
                        }
                }
                else{
                        count = 1;
                }
        }

        cout<<high<<" "<<max;


      


     



}