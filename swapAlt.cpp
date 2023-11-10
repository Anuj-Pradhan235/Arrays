class Solution{
public:
    void swapAlt(int arr[],int size){
        int i=0,j=1;
        while(j<size){
            swap(arr[i],arr[j]);
            i+=2;
            j+=2;
        }
    }
};