class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {

        int row = matrix.size();
        int col = matrix[0].size();

        vector<int> ans;
        int count = 0;
        int total = row * col;

        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row - 1;
        int endingCol = col - 1;

        while (count < total)
        {
            // print starting Row
            for (int index = startingCol; count < total && index <= endingCol; index++)
            {
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingRow++

                // Print ending Col
                for (int index = startingRow; count < total && index < endingRow; index++)
            {
                ans.push_back(matrx[index][endingCol]);
                count++;
            }
            endingCol--;

            // Print ending Row Reverse
            for (int index = endingCol; count < total && index < startingRow; index++)
            {
                ans.push_back(matrx[index][endingRow]);
                count++;
            }
            endingRow--;

            // Print Starting-Col Reverse
            for (int index = endingRow; count < total && index < startingRow; index++)
            {
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            endingRow++;
        }
        return ans;
    }
};