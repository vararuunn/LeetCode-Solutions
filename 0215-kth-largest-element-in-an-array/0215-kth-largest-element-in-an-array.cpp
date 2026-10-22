class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int cnt = nums.size() - k;        
        int c=0;
        int i=0;
        for(i=0;i<nums.size();i++){
            if(c==cnt)
                break;
            c++;
        }
        return nums[i];
    }
};