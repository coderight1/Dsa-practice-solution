class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int sum =0;
        int maxi = arr[0];
        
        for(int i=0;i<n;i++){
            //step1 of kadane's algorithm
            sum+=arr[i];
            
            // step2 of kadanes's algorithn
            maxi = max(sum,maxi);
            
            // step3 of kadanes's algorithm
            if(sum<0){
                sum =0;
            }
            
        }
        return maxi;
    }
};