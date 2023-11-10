class Solution{
public:
    int findDuplicate1(int arr[],int n){
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++)freq[arr[i]]++;
        for(auto i:freq)if(i.second>1)return i.first;
        return -1;
    }
    int findDuplicate2(int arr[],int n){
        int ans=0;
        for(int i=1;i<n;i++)ans^=i;
        for(int i=0;i<n;i++)ans^=arr[i];
        return ans;
    }
};