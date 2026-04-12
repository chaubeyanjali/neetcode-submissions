class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int m=0; m<matrix.size(); m++)
        {
            for(int n = 0; n < matrix[0].size(); n++)
            {
                if(matrix[m][n] == target)
                {
                    return true;
                }
            }
        }
        return false;
    }
};
