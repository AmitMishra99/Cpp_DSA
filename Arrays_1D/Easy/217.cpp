#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Step 1: Sort the array
        
        for (int i= 0; i<nums.size()-1; i++) {
            if (nums[i] == nums[i + 1]) { // Step 2: Check adjacent elements
                return true; // Found a duplicate
            }
        }
        
        return false; // No duplicates found
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 2}; // Example input
    return 0;
}
