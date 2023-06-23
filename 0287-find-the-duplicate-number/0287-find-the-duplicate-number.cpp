class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int res;
        set<int>s;
        int n = nums.size();
      for(int i = 0 ; i < n ; i++)
      {
            if(s.find(nums[i]) == s.end())          
                s.insert(nums[i]);
            else{
                res =  nums[i];
                break;
        }
      }
      return res;  
    }
};