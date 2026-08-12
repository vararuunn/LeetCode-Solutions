class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        vector<int> ans;
        int n = nums.size();

        int lb = lowerB(nums, target);
        int ub = upperB(nums, target);

        if (lb == n || nums[lb] != target)
            return {};

        for (int i = lb; i < ub; i++) {
            ans.push_back(i);
        }

        return ans;
    }

    int lowerB(vector<int>& nums, int target) {
        int ans = nums.size();
        int n = nums.size();
        int low = 0, high = n - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (nums[mid] >= target) {
                ans = mid;
                high = mid - 1;
            }
            else
                low = mid + 1;
        }

        return ans;
    }

    int upperB(vector<int>& nums, int target) {
        int ans = nums.size();
        int n = nums.size();
        int low = 0, high = n - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (nums[mid] > target) {
                ans = mid;
                high = mid - 1;
            }
            else
                low = mid + 1;
        }

        return ans;
    }
};