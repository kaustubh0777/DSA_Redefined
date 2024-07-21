class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();

        int top = 0;
        int bottom = r - 1;
        int left = 0;
        int right = c-1;

        vector<int> out;
        vector<vector<int>> ans;

        while (top <= bottom && left <= right) {
            // printing the top row from left to right

            for (int i = left; i <= right; i++) {
                out.push_back(matrix[top][i]);
            }
            top++;

            // printing right column from top to bottom

            for (int i = top; i <= bottom; i++) {
                out.push_back(matrix[i][right]);
            }
            right--;

            //    printing bottom row from right to left
            if(top<=bottom)
            {
            for (int i = right; i >= left; i--) {
                out.push_back(matrix[bottom][i]);
            }
            bottom--;
            }

            //   printing left column from bottom to top
          if(left<=right)
          {

            for (int i =bottom ;i>=top;i--)
            {
                out.push_back(matrix[i][left]);
            }
            left++;
          }
        }
        return out;
    }
};