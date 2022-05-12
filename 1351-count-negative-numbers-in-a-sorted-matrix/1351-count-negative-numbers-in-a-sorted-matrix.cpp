class Solution {
public:
    int binarySearch(vector<int>&vec)
    {
    int l = 0;
    int r = vec.size()-1;
    while(r >= l) {
        int mid = l + (r - l) / 2;
 
        // If the element is present at the middle
        // itself
        if (vec[mid] >= 0)
            l = mid+1;
 
        // If element is smaller than mid, then
        // it can only be present in left subarray
        else
           r = mid - 1;
 
        // Else the element can only be present
        // in right subarray
    }
        return vec.size()-(r+1);
}
 
 int countNegatives(vector<vector<int>>& grid)
 {
     int count = 0;

     for(int i = 0; i<grid.size(); i++)
     {
         count += binarySearch(grid[i]);
     }

     return count;
 }
};