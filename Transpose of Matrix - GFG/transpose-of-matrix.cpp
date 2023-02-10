//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public:  
    //Function to find transpose of a matrix.
    void transpose(vector<vector<int> >& m, int n)
    { 
        /* method 1 O(n^2) time and space now reduce space complexity
        int temp[n][n];
        for(int i = 0 ; i < n ;i++)
            for(int j = 0 ; j < n ;j++)
             {
                 temp[i][j] = m[j][i]; 
             }
        for(int i = 0 ; i < n ;i++)
            for(int j = 0 ; j < n ;j++)
             {
                 m[i][j] = temp[i][j]; 
             }
             */
             //method 2
             for(int i = 0 ; i < n ;i++)
            for(int j = i+1 ; j < n ;j++)
             {
                 swap(m[i][j] , m[j][i]); 
             }
             
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        ob.transpose(matrix,n);
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends