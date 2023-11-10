class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod=1,sum=0;
        int num=n;
        while(num){
            int lastDigit=num%10;
            num/=10;
            prod*=lastDigit;
            sum+=lastDigit;
        }
        return prod-sum;
    }
};