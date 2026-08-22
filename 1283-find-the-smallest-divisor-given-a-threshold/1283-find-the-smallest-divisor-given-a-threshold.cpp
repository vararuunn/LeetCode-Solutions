class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid=(low+high)/2;
            int ans=smallest(nums,mid);
                if(ans<=threshold)
                    high=mid-1;
                else
                    low=mid+1;
        
            }
            return low;

        }
    int smallest(vector<int>& nums, int divisor){
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=ceil((double)nums[i]/divisor);
        }
        return sum;
    
    }
};