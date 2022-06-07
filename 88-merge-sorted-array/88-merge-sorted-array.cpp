class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     
        vector<int>vec;
        int i = 0; 
        int j = 0; 
        int k = 0;
        
        while(i<m && j<n)
        {
            if(nums1[i] < nums2[j])
            {
                vec.push_back(nums1[i]);
                i++;
            }
            else if(nums1[i] > nums2[j])
            {
                vec.push_back(nums2[j]);
                j++;
            }
            else if(nums1[i] == nums2[j])
            {
                vec.push_back(nums1[i]);
                vec.push_back(nums2[j]);
                i++;
                j++;
            }
        }
        
        if(i!=m)
        {
            while(i<m)
            {
                vec.push_back(nums1[i]);
                i++;
            }
        }
        if(j!=n)
        {
            while(j<n)
            {
                vec.push_back(nums2[j]);
                j++;
            }
        }
        
        for(int k = 0; k<m+n; k++)
        {
            nums1[k] = vec[k];
        }
    }
};