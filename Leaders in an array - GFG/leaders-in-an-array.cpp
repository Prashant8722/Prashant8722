//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    void rev(vector<int>&vec , int low , int high)
    {
     while(low < high)
     {
         swap(vec[low++],vec[high--]);
     }
    }
    public:
    vector<int> leaders(int a[], int n){
       vector<int> v;
       v.push_back(a[n-1]);
       int tempLeader = a[n-1];
       for(int i = n-2; i >=0 ; i--)
       {
           
           if(a[i] >= tempLeader)
            {
                v.push_back(a[i]);
                tempLeader = a[i];
            }
       }
       rev(v, 0, v.size()-1);
       return v;
        
    }
};

//{ Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}

// } Driver Code Ends