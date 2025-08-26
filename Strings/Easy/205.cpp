#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{

        vector<string> str;
        str.push_back("flogt");
        str.push_back("flowr");
        str.push_back("floa");
        str.push_back("flossaw");
        str.push_back("flow");

        string prefix = "";

        for (int i = 0; i < str.size(); i++)
        {
                cout << str[i] << endl;
        }
        cout << endl;
        sort(str.begin(), str.end());

        string first = str[0];
        string last = str[str.size()-1];

        for (int i = 0; i <min(first.size(),last.size()); i++)
        {
                if(first[i]==last[i]) prefix.push_back(first[i]);
                else break;
        }
        cout<<prefix;
}