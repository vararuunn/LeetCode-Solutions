class Solution {
public:
    int minDays(vector<int>& day, int m, int k) {
        int min=*min_element(day.begin(),day.end());
        int max=*max_element(day.begin(),day.end());
        int n=day.size();
        long long val=m*1LL*k*1LL;
        if(n<val)   return -1;
        int low=min;int high=max;
        while(low<=high){
            long long mid=(low+high)/2;
            long long noofbouq=minimum(day,m,k,mid);
            if(noofbouq>=m) high =mid-1;
            else    low=mid+1;
        }
        return low;
    }
    long long minimum(vector<int>& day, int m, int k,int mid){
        int n=day.size();
        int cnt=0;
        int boquet=0;
        for(int i=0;i<n;i++){
            if(day[i]<=mid)
                cnt++;
            else{
                boquet+=(cnt/k);
                cnt=0;
            }

        }
        boquet+=(cnt/k);
        
          
        return boquet;
        }
    
};