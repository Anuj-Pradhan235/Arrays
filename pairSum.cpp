class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        int cnt=0;
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++)freq[arr[i]]++;
        for(int i=0;i<n;i++){
            freq[arr[i]]--;
            cnt+=(freq[k-arr[i]]);
        }
        return cnt;
    }
};