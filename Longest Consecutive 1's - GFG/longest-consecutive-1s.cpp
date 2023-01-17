//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

/*  Function to calculate the longest consecutive ones
*   N: given input to calculate the longest consecutive ones
*/
class Solution
{
    vector<int>v;
    long long int inttobinary(int n)
    {
        if(n==0){
            return 0;
        }
        else
        {
            return (n%2) + 10*inttobinary(n/2);
        }
    }
    public:
    int maxConsecutiveOnes(int N)
    {
        long long int res = inttobinary(N);
        // cout<<"res="<<res<<endl;
        while(res>0)
        {
           v.push_back(res%2);
           res=res/10;
        }
        // for(int v1 : v)
        //     cout<<v1<<" ";
        int count=0;
        int res1=0;
        for(int i = 0 ;i < v.size() ; i++)
        {
            if(v[i] ==0 )
                count=0;
            else
            {
                count++;
                res1=max(res1,count);
            }
        }
        return res1;
    }
};


//{ Driver Code Starts.

// Driver Code
int main() {
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n;
		cin>>n;//input n
		Solution obj;
		//calling maxConsecutiveOnes() function
		cout<<obj.maxConsecutiveOnes(n)<<endl;
	}
	return 0;
}
// } Driver Code Ends