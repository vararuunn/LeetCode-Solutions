class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int XOR1,XOR2=0;
        int ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            XOR1=XOR1^i;
            XOR2=XOR2^nums[i];
            
        }
        XOR1=XOR1^n;
        ans=XOR1^XOR2;
        return ans;
    }
};