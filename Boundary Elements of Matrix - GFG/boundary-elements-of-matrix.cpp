//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    vector<int> BoundaryElements(vector<vector<int>>&mat){
        vector<int>v;
        int n = mat.size(); //  row && column;
            if(n==1)
            {
                v.push_back(mat[0][0]);
            }
            // else if(n == 2)
            // {
            //     for(int i = 0;i<n ;i++)
            //     {
            //         for(int j= 0 ; j<n ;j++)
            //             v.push_back(mat[i][j]);
            //     }
            // }
            else {
                for(int j = 0 ; j < n ;j++)
                {   
                    v.push_back(mat[0][j]);
                }
                for(int i = 1;i<n-1; i++)
                {
                    v.push_back(mat[i][0]);
                    v.push_back(mat[i][n-1]);
                }
                for(int j = 0 ; j< n ; j++)
                {
                    v.push_back(mat[n-1][j]);
                }
            }
            return v;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>matrix(n, vector<int>(n, 0));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
				cin >> matrix[i][j];
		Solution obj;
		vector<int>ans = obj.BoundaryElements(matrix);
		for(auto i: ans)
			cout << i << " ";
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends