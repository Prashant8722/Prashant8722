class Solution {
public:
    int lengthOfLongestSubstring(string s) {
//         Initialize 'n' as the size of the input string, 'res' as 0, and create a vector 'prev' of size 256 with all elements set to -1.
// Initialize 'i' as 0.
       vector<int>prev(256 , -1);
       int n = s.length(), res = 0;
       int i = 0 ;

    //    Iterate over 'j' from 0 to 'n-1':
       for(int j = 0 ; j < n ; j++){
        //    a. Update 'i' as the maximum of 'i' and 'prev[s[j]] + 1'.
           i = max(i , prev[s[j]]+1);
        // b. Calculate the length of the current substring as 'maxEnd' = 'j' - 'i' + 1.
           int maxEnd = j - i + 1;
         //   c. Update 'res' as the maximum of 'res' and 'maxEnd'.
           res =  max(res , maxEnd );
         //   d. Update 'prev[s[j]]' with 'j'.
           prev[s[j]] = j;
       }
      //  Return 'res' as the length of the longest substring without repeating characters.
       return res;   
    }
};