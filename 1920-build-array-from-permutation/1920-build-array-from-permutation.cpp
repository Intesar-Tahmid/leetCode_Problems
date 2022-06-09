class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>vavy;
        for(int i = 0; i<nums.size(); i++)
        {
            vavy.push_back(nums[nums[i]]);
        }
        
        return vavy;
    }
};