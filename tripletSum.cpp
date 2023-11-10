class Solution{
    private:
    bool twoSum(int arr[],int n,int target){
        int i=0,j=n-1;
        while(i<j){
            if(arr[i]+arr[j]==target)return 1;
            else if(arr[i]+arr[j]<target)i++;
            else j--;
        }
        return 0;
    }
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        sort(A,A+n);
        for(int i=0;i<n;i++){
            int num=X-A[i];
            if(twoSum(A+i+1,n-(i+1),num))return 1;
        }
        return 0;
    }

};