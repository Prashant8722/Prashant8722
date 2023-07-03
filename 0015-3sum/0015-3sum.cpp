class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> res;

        sort(nums.begin(), nums.end());
        int size = nums.size();
        for (int i = 0; i < size - 2; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int x = nums[i];
            int last = size - 1;
            for (int j = i + 1; j < last;)
            {
                int sum = x + nums[j] + nums[last];
                if (sum == 0)
                {
                    res.push_back({x, nums[j], nums[last]});
                    while (j < last && nums[j] == nums[j + 1])
                    {
                        j++; // Skip duplicates for the second element
                    }
                    while (j < last && nums[last] == nums[last - 1])
                    {
                        last--; // Skip duplicates for the third element
                    }
                    // Move both pointers inward to avoid duplicates
                    j++;
                    last--;
                }
                else if (sum > 0)
                {
                    // As the array is sorted, moving last pointer left will decrease the sum
                    last--;
                }
                else //// Moving j pointer right will increase the sum
                    j++;
            }
        }
        //     // Convert the result to a set of vectors to eliminate duplicates
        //         set<vector<int>> resultSet(res.begin(), res.end());

        // // Convert the set back to a vector
        //     vector<vector<int>> result(resultSet.begin(), resultSet.end());
        return res;
    }
};