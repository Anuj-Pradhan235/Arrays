class Solution{
public:
    bool linearSearch(int arr[],int size,int target){
        for(int i=0;i<size;i++)if(arr[i]==target)return 1;
        return 0;
    }
};