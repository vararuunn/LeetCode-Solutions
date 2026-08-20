
class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0;
        int n=nums.size();
        int ans=INT_MAX;
        int high=n-1;
        if(n==1)    return nums[n-1];
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==nums[low]&&nums[mid]==nums[high])
            {   
                ans=min(ans,nums[low]);
                low++;
                high--;
                continue;
            }
            if(nums[mid]>=nums[low]){
                ans=min(ans,nums[low]);
                low=mid+1;  
            }
            else //(nums[mid]<=nums[low])
            {
                ans=min(ans,nums[mid]);
                high=mid-1;

            }
        }
            return ans;

    }
};
