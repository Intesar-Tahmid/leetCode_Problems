class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int size = nums.size();
        int array[2*size];
        
        for(int i = 0; i<size; i++)
        {
            array[i] = nums[i];
            array[i+size] = nums[i];
        }
        
        vector<int>vec;
        for(int i = 0; i<2*size; i++)
        {
            vec.push_back(array[i]);
        }
        
        return vec;
    }
};