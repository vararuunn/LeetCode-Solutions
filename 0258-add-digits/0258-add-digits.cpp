class Solution {
public:
    int addDigits(int num) {  
        while(num>0)
        {
            int r =num%10;
            int x=num/10;
            num=r+x;
            if(num<10)  return num;
        }
        return 0;
    }
};