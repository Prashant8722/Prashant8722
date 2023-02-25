//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
void rotate (vector<vector<int> >& matrix);


// } Driver Code Ends
//User function template for C++

/* matrix : given input matrix, you are require 
 to change it in place without using extra space */
void rotate(vector<vector<int> >& m)
{
    int ms = m.size();
    for ( int i= 0 ; i < ms ; i++)
        for(int j = i+1 ; j < ms; j++)
            {
                swap(m[i][j],m[j][i]);
            }
      for ( int i= 0 ; i < ms ; i++)
        {
            int low = 0 ; int high = ms-1;
            while(low < high)
            {
                swap(m[low][i], m[high][i]);
                low++;
                high--;
            }
        }
}


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t; 
    while(t--)
    {
        int n;
        cin>>n; 
        vector<vector<int> > matrix(n);
        for(int i=0; i<n; i++)
        {
            matrix[i].resize(n);
            for(int j=0; j<n; j++)
                cin>>matrix[i][j]; 
        }
        rotate(matrix);
        for (int i = 0; i < n; ++i)
        {
            for(int j=0; j<n; j++)
                cout<<matrix[i][j]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}


// } Driver Code Ends