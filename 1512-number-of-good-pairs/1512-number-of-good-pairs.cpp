class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int cnt = 0;
        vector<int> freq(101, 0);

        for(int i = 0; i < nums.size(); i++) {
            cnt += freq[nums[i]];
            freq[nums[i]]++;
        }

        return cnt;
    }
};