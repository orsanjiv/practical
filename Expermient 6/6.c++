#include <iostream>
#include <vector>

using namespace std;

bool isSubsetSum(vector<int>& nums, int targetSum) {
    int n = nums.size();
    vector<vector<bool>> dp(n + 1, vector<bool>(targetSum + 1, false));

    // Initialize the DP table
    for (int i = 0; i <= n; i++)
        dp[i][0] = true;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= targetSum; j++) {
            // If the current number is greater than the target sum, skip it
            if (nums[i - 1] > j)
                dp[i][j] = dp[i - 1][j];
            else {
                // Include the current number in the sum or exclude it
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - nums[i - 1]];
            }
        }
    }

    // The final result is stored in dp[n][targetSum]
    return dp[n][targetSum];
}

int main() {
    vector<int> nums = {3, 34, 4, 12, 5, 2};
    int targetSum = 9;

    if (isSubsetSum(nums, targetSum))
        cout << "Subset with the given sum exists." << endl;
    else
        cout << "No subset with the given sum exists." << endl;

    return 0;
}
