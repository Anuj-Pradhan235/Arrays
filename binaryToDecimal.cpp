class Solution {
  public:
    int binaryToDecimal(string str) {
        int res=0,cnt=0;
        for(int i=str.length()-1;i>=0;i--){
            int lastBit=str[i]-'0';
            res+=(pow(2,cnt++)*lastBit);
        }
        return res;
    }
    
};