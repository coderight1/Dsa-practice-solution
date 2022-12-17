//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        // int count =0;
        // if(n>m){
            // for(int i =0;i<n;i++){
            //     for(int j =0;j<m;j++){
                    
            //     if(a[i]==b[j]){
            //         count++;
            //     }
            //   }
            // }
            // return (n+m)-count;
        // }
        
        // if(n==m){
        //     for(int i =0;i<n;i++){
        //         for(int j = 0;j<m;j++){
                    
                
        //             if(a[i]==b[j]){
        //             count++;
        //             }
        //         }
        //     }
        //     return (n+m)-count;
        // }
        
        // if(n<m){
        //     for(int i =0;i<n;i++){
        //         for(int j =0;j<m;j++){
                    
        //             if(a[i]==b[i]){
        //                 count++;
        //             }
        //         }
        //     }
        //     return (n+m)-count;
        // }
        set<int>s;
        for(int i =0;i<n;i++){
            s.insert(a[i]);
        }
        for(int j =0;j<m;j++){
            s.insert(b[j]);
        }
         
        return s.size(); 
    }
};