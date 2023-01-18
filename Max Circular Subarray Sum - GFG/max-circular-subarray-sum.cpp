//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find maximum circular subarray sum.
    int normalSum(int arr[],int n)
    {   int oSum;
        int gSum =oSum = arr[0];
        for(int k =1 ; k<n ;k++)
        {
            gSum = max(arr[k],arr[k]+gSum);
            oSum = max(oSum,gSum);
        }
        return oSum;
    }
    int circularSubarraySum(int arr[], int n){
        int maxSum = normalSum(arr,n);
        if(maxSum < 0 ) return maxSum;
        int revSum = 0;
        for(int i = 0 ;  i < n ;i++)
            {
                revSum+= arr[i];
                arr[i] = -1*arr[i];
            }
        maxSum = max(maxSum , revSum+normalSum(arr,n));
    
        return maxSum;
    }
    
};

//{ Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends