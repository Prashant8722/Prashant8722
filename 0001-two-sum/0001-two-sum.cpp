class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>vec;
        map<int ,int>mp;
        for(int i=0;i<nums.size();i++){
                if(mp.find(target-nums[i]) == mp.end() ){
                    mp.insert({nums[i] , i});
                }
                else{
                    vec.push_back(mp[target - nums[i] ]);
                    vec.push_back(i);
                    break;
                }
       }
       return vec;
    }  
};