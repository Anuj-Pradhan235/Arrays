class Solution{
public:
    pair<int,int>minMax(int arr[],int size){
        int maxi=INT_MIN,mini=INT_MAX;
        for(int i=0;i<size;i++){
            maxi=max(maxi,arr[i]);
            mini=min(mini,arr[i]);
        }
        return {mini,maxi};
    }
};