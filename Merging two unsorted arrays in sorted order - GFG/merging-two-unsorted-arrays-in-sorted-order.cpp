//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Your code goes hereclass Solution{
	
class Solution{
	public:
	void mergealgo(int a[],int b[],int res[] , int n1 ,int n2)
    {
        int k = 0;
        int la = 0 , ra = 0;
        while(la < n1 &&   ra < n2)
        {
            if(a[la] <= b[ra]){
                res[k++] = a[la++];
            }
            else{
                res[k++] = b[ra++];
            }
        }
        while(ra < n2 )  
                 res[k++] = b[ra++];
        while(la < n1 )  
                 res[k++] = a[la++];
    }
	void sortedMerge(int a[], int b[], int res[],int n, int m)
	{
	    sort(a,a+n);
	    sort(b,b+m);
	    mergealgo(a,b,res,n,m);
	}
};
	  


//{ Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }

	    for(int i = 0;i<m;i++){
	        cin >> b[i];
	    }
	    
	    int res[n+m];

      
        Solution ob;
        ob.sortedMerge(a,b,res,n,m);

        for(int i = 0;i<n+m;i++){
	        cout << res[i] << " ";
	    }
	   
        
	    cout << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends