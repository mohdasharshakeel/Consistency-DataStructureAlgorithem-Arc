#include <iostream>
#include <vector>
using namespace std;

// Function to find the missing number
int missingNumber(vector<int>& nums) {
    int sum = 0;
    int n = nums.size();
    
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }

    int totalSum = (n * (n + 1)) / 2;
    int ans = totalSum - sum;

    return ans;
}

int main() {
    // Example input
    vector<int> nums = {3, 0, 1};

    cout << "Missing number is: " << missingNumber(nums) << endl;

    return 0;
}
