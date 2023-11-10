class Solution {
public:
    string toBinary(int N)
    {
        string res="";
        int num=N;
        while(num){
            int lastBit=num&1;
            res.push_back(char(lastBit+'0'));
            num>>=1;
        }
        reverse(res.begin(),res.end());
        return res; 
    }
};