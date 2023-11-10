class Solution{
public:
    void reverse(int arr[],int size){
        //two pointer approach
        int i=0,j=size-1;
        while(j>=i)swap(arr[i++],arr[j--]);
    }
};