class Solution {
public:
   vector<int> selfDividingNumbers(int left, int right) {
    vector<int>arr; 
    for(int i=left;i<=right;i++){
        int sum=0;
        int temp=i;
        bool valid=true;
        while(temp>0){
            int r=temp%10;
            if(r==0){
                valid=false;
                break;
            }
            sum+=(i%r);
            temp=temp/10;    
        }
        if(sum==0 && valid){
            arr.push_back(i);
        }
    }
    return arr;
}
};