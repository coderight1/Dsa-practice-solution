//User function Template for C++

class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	//code here.
    	int maxi = INT_MIN;
    	int mini = INT_MAX;  
    	    for(int i = 0;i<N;i++){
    	        if(A[i]>maxi){
    	            maxi = A[i];
    	        }
    	    }
    	    for(int j= 0;j<N;j++){
    	        if(A[j]<mini){
    	            mini = A[j];
    	        }
    	    }
    	    return maxi + mini;
    }

};
