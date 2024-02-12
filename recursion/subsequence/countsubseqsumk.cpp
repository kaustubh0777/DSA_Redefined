#include <bits/stdc++.h>
using namespace std;

int countSubsequences(vector<int> &arr, int index, int sum, int k) {
    int n = arr.size();
    // Base cases:
    if (index == n) {
        // If we reach the end of the array and sum is k, we found a subsequence
        return (sum == k);
    }

    // Recursive calls:
    // 1. Exclude the current element:
    int count1 = countSubsequences(arr, index + 1, sum, k);

    // 2. Include the current element only if it doesn't exceed the target sum:
    int count2 = 0;
    if (sum + arr[index] <= k) {
        count2 = countSubsequences(arr, index + 1, sum + arr[index], k);
    }

    // Return the total count from both choices:
    return count1 + count2;
}

int main() {
    int n, in;
    cin >> n;
    int k;
    cin >> k;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        cin >> in;
        arr.push_back(in);
    }

    int count = countSubsequences(arr, 0, 0, k);

    cout << "Number of subsequences with sum " << k << ": " << count << endl;

    return 0;
}
