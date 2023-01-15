//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    void rev(int i,int j,int arr[])
    {
        while(i<j)
        {
            swap(arr[i++],arr[j--]);
        }
    }
	
	
	public:
	void leftRotate(int arr[], int k, int n) 
	{ 
	  k= k % n;
	   //int temp = arr[0];
	/*  for(int i = 1; i <=k ; i++ )
	  {
	      int temp=arr[0];
	      for(int j=0;j<n-1;j++)
	      {
	          arr[j]=arr[j+1];
	      }
	      arr[n-1]=temp; */
	      rev(0,k-1,arr);
	      rev(k,n-1,arr);
	      rev(0,n-1,arr);
	  }
		 

};

//{ Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin >> n;
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	        // um[a[i]]++;
	    }


       

        Solution ob;
        ob.leftRotate(a,k,n);
        
        for (int i = 0; i < n; i++) 
        	cout << a[i] << " "; 

	    cout << "\n";
	     
    }
    return 0;
}



// } Driver Code Ends