#include <iostream>
#include <climits>
using namespace std;
// Brute Approach 
int maxSubarraySum(int arr[], int n) {
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++) { // Starting index
        int sum = 0;  // Running sum
        for (int j = i; j < n; j++) { // Ending index
            sum += arr[j]; // Add next element to sum
            if(sum>maxSum) maxSum = sum; 
        }
    }
    return maxSum;
}




int maxSubarraySum2(int arr[], int n) { // Kadane's Algorithm 
    int maxSum = INT_MIN, currentSum = 0;
    for (int i = 0; i < n; i++) {
        currentSum += arr[i];  // Add current element to sum
        cout<<currentSum<<endl;
        maxSum = max(maxSum, currentSum);  // Update max sum
        cout<<maxSum<<endl;
        if (currentSum < 0) currentSum = 0;  // Reset if sum is negative
    }
    return maxSum;
}










int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Maximum Subarray Sum: " << maxSubarraySum2(arr, n) << endl;
}
