class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int max =*max_element(nums.begin(),nums.end());
        int high =max;
        while(low<=high){
            int mid=(low+high)/2;
            int smallest =smallD(nums,mid);
            if(smallest<=threshold)
                high =mid-1;
            else
                low =mid+1;
        }
        return low;
    }
    int smallD(vector<int>& nums,int mid){
        int sum=0;
        int n=nums.size();
        for(int i =0;i<n;i++){
            sum += ceil((double)nums[i] / mid);
        }
        return sum;
    }
};