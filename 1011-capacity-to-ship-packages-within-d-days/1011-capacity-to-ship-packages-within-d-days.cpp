class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int max =*max_element(weights.begin(),weights.end());
        int low=max;
        int sum =0;
        for(int i =0;i<weights.size();i++){
            sum =sum+weights[i];
        }  
        int high =sum;
        while(low<=high){
            int mid=(low+high)/2;
            int no_of_days =countdays(weights,mid);
            if(no_of_days<=days)
                high =mid-1;
            else
                low=mid+1;
        }
        return low;
    }
    int countdays(vector<int>& weights,int mid){
        int day =1,load=0;
        for(int i=0;i<weights.size();i++){
            if(weights[i]+load>mid)
            {
                day =day+1;
                load =weights[i];
            }
            else{
                load+=weights[i];
            }
        }
        return day;
    }
};