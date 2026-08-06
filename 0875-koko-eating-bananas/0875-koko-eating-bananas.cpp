class Solution {
public:

    int minEatingSpeed(vector<int>& piles, int h) {
        int max =*max_element(piles.begin(),piles.end());
        int low =1,high =max;
        while(low<=high){
        int mid = low + (high - low) / 2;
            long long hour = totalhours(piles, mid);
            if(hour<=h)
                high =mid -1;
            else 
                low =mid+1;
         }
         return low;
    }



    long long totalhours(vector<int>& piles,int mid){
    long long totalh = 0;
        for(int i=0;i<piles.size();i++)
        {
            totalh+=ceil((double)piles[i]/(double)mid);
        }
        return totalh;
    }
};