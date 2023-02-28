//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int palindrome(int num)
    {
        if(num < 10 )
            return num;
        else
            return ((num % 10)*10 + palindrome(num/10));
    }
    int isDigitSumPalindrome(int n) {
         int sum = 0 ;
        while(n>0)
            {
                sum+=n%10;
                n=n/10;
            }
        // cout<<sum<<endl;            //19
        int newNumber=sum;          
        int revSum = palindrome(sum);       
        // cout<<revSum<<endl;         //91
        if(revSum == newNumber)
            return 1;
        else
            return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}

// } Driver Code Ends