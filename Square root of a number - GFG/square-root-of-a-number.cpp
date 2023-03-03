//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        long long int l = 1 , h = x,result = -1;;
        
        while(l <= h)
        {
            long long int mid = l + (h-l)/2;
            long int midSquare = mid * mid;
            if(midSquare == x)
                return mid;
            else if (midSquare > x)
                h = mid -1 ;
            else
                {
                    result = mid;
                    l = mid +1 ;
                }
        }
      return result;  
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends