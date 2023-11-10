class Solution {
public:
    int findComplement(int num) {
        int n=num;
        int mask=0;
        while(n){
            mask=(mask<<1)|1;
            n>>=1;
        }
        return (~num)&mask;
    }
};