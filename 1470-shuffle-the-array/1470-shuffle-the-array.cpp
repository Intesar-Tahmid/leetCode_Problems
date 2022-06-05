class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>vavy;
        
        for(int i = 0; i<n; i++)
        {
            vavy.push_back(nums[i]);
            vavy.push_back(nums[i+n]);
        }
        
        return vavy;
    }
};