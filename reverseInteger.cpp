class Solution {
public:
    int reverse(int x) {
        int ans=0;
        int num=x;
        while(num){
            int lastDigit=num%10;
            if(ans>INT_MAX/10 || ans<INT_MIN/10)return 0;
            ans=ans*10+lastDigit;
            num/=10;
        }
        return ans;
    }
};