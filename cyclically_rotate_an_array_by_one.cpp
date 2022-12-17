//User function Template for C++

void rotate(int arr[], int n)
{
    //  int arr[n-1]== int a[0];
    for(int i = n-1;i>0;i--){
        swap(arr[i],arr[i-1]);
    }
}