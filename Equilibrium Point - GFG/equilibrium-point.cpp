//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    /* Brute Force method
    int equilibriumPoint(long long a[], int n) {
        // int sum = a[0];
        for(int i = 0 ; i<n ;i++)
        {
            int lSum = 0;
            for(int j = 0 ; j<i ;j++)
                {
                lSum+=a[j];
                }
            int rSum = 0;
            for(int k = i+1 ; k<n ;k++)
                {
                rSum+=a[k];
                }
            if(rSum == lSum)
                return i+1;
        }
           return -1;
    }
    */
    int equilibriumPoint(long long a[], int n) {
            int sum = 0;
        for(int i = 0 ; i<n ;i++)
        {
            sum+=a[i];
        }
         int lsum = 0 ;
          for(int i = 0 ; i<n ;i++)
        {
            if(lsum == sum-a[i])
                return i+1;
            lsum+=a[i];
            sum-=a[i];
        }
        return -1;
    }
};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends