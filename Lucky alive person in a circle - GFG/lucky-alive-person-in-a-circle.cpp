//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int josh(vector<int> &v , int k , int ind)
    {
        if(v.size() == 1)
            {
                return v[0];
            }
        ind = (ind + k) % v.size();
        v.erase(v.begin() + ind);
        //   for(int i = 0 ; i< v.size() ; i++)
        // {
        //     cout<<v[i]<<" ";
        // }
        // cout<<endl;
        josh(v,k,ind);
    }
    
    int find(int N){
        /* method 1
        //  int temp = 1;
        //  while(temp<=N)
        //  {
        //      temp *= 2 ;
        //  }
        //  temp =temp /2 ;
        //  return 2*(N-temp) + 1;
        */
        vector<int>v;
        int k = 2;
        k--;     //personNoKilled
        int ind = 0 ;
         for(int i = 0 ; i< N ; i++)
        {
            v.push_back(i+1);
        }
        // for(int i = 0 ; i< N ; i++)
        // {
        //     cout<<v[i]<<" ";
        // }
        //cout<<endl;
        return josh(v,k,ind);
       //return 0; 
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.find(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends