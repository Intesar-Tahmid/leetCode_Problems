class NumMatrix {
public:
    vector<vector<int>>checksum;
    NumMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        checksum = vector<vector<int>>(m+1, vector<int>(n+1));
        
        for(int i = 1; i<=m; i++)
        {
            for(int j = 1; j<=n; j++)
            {
                checksum[i][j] = checksum[i-1][j] + checksum[i][j-1] - checksum[i-1][j-1] + matrix[i-1][j-1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        row1++;
        col1++;
        row2++;
        col2++;
        
        return checksum[row2][col2] - checksum[row2][col1-1] - checksum[row1-1][col2] + checksum[row1-1][col1-1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */

