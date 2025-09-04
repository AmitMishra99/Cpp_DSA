#include <iostream>
#include<vector>
using namespace std;
int main(){

        vector<int>nums = {1,2,3,4};
        int n = nums.size();
        
        // Brute Approach 
        // vector<int> ans(n);
        // for (int i = 0; i < n; i++) {
        //     long long prod = 1;
        //     for (int j = 0; j < n; j++) {
        //         if (i == j) continue;
        //         prod *= nums[j];
        //     }
        //     ans[i] = (int)prod; 
        // }

        // Optimizied Approach 

        vector<int> ans(n, 1);
        // Step 1: Prefix product
        int prefix = 1;
        for (int i = 0; i < n; i++) {
            ans[i] = prefix;
            prefix *= nums[i];
        }

        // Step 2: Suffix product
        int suffix = 1;
        for (int i = n - 1; i >= 0; i--) {
            ans[i] *= suffix;
            suffix *= nums[i];
        }


        for(int i=0;i<n;i++){
                cout<<ans[i]<<" ";
        }
}
