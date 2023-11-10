class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt=0;
        uint32_t num=n;
        while(num){
            cnt+=(num&1);
            num=num>>1;
        }
        return cnt;
    }
};