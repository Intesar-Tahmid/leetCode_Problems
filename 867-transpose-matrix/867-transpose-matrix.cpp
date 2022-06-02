class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int column = matrix[0].size();
        
        vector<vector<int>> matrix2(column, vector<int>(row));
        
        for(int i = 0; i<row; i++)
        {
            for(int j = 0; j<column; j++)
            {
                matrix2[j][i] = matrix[i][j];
            }
        }
        
        return matrix2;
    }
    
    
};