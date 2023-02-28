//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
	public:
	vector<int>AllPrimeFactors(int n) {
	   vector<int> res;
	   bool flag = false;
	    while(n % 2 == 0){
	       if(!flag){ 
	           res.push_back(2);
	           flag = true;
	       }
	       n=n/2;
	    }
	    flag = false;
	    while(n % 3 == 0){
	    if(!flag){ 
	        res.push_back(3);
	        flag = true;   
	        }
	       n=n/3;
	    }
	    flag = false;
	    for ( int i = 5 ; i* i <= n ; i+=6)
	    {
	        while(n%i == 0 )
	            {
	                if(!flag) 
	                {
	                res.push_back(i);
	                flag =true;
	                }    
	                n/=i;
	            }
	            flag = false;
	            while(n%(i+2) == 0 )
	            {
	                if(!flag) 
	                {
	                res.push_back(i+2);
	                flag =true;
	                }    
	                n/=(i+2);
	            }
	            flag = false;
	    }
	    if(n > 3 )  
	        res.push_back(n);
	        return res;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.AllPrimeFactors(N);
		for(auto i: ans)
			cout << i <<" ";
		cout <<"\n";
	}  
	return 0;
}
// } Driver Code Ends