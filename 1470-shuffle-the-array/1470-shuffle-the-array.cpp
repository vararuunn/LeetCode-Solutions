class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i=0;
        int t=n;
        vector<int>arr;
        while(i<n){
            arr.push_back(nums[i]);
            arr.push_back(nums[t]);
            i++;
            t++;
        }
        return arr;
    }
};