class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();int j=0;
        for(int i=0;i<n;i++){
            nums.push_back(nums[j]);
            j++;
            if(j==n)
            j=0;
        }
        return nums;
    }
};