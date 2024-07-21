class Solution {
public:
    int searchInsert(vector<int>& v, int x) {
        int n = v.size();
        int ans = n;
        int low = 0;
        int high = v.size() - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (v[mid] >= x) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};