#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int findMin(vector<int>& nums) {
    int min = INT_MAX;
    for(int i=0;i<nums.size();i++){
        if(nums[i]<min) min = nums[i];
    }
    return min;
}
int main(){
    vector<int>nums = {3,4,5,1,2};

    cout<<findMin(nums);

}
        
    