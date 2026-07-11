// User function Template for C++

class Solution {
  public:
    void Addition(vector<vector<int>>& matrixA, vector<vector<int>>& matrixB) {
        // Code here
        int a1 = matrixA.size();
        int b1 = matrixA[0].size();
        for(int i=0;i<a1;i++)
        {
            for(int j=0;j<b1;j++)
            {
                matrixA[i][j] = matrixA[i][j] + matrixB[i][j];
            }
        }
    }
};