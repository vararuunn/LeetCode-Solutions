class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>arr;
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val)    
                continue;
            else{
               nums[j]=nums[i];
               j++;
            }
        }
        return j;
    }
};