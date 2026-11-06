class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0 ; 
        int row = grid.size() ;
        int cols = grid.empty() ? 0 : grid[0].size();
        int target = 0 ; 
        for(int i = 0 ; i < row ; i++){
            int left = 0 , right = cols; 
            while(left < right) {
                int mid = left + (right - left)/2 ;
                if(grid[i][mid] >= target){
                    left = mid + 1 ; 
                }
                else {
                    right = mid ; 
                }
            }
            count += cols - left ; 
        }
        return count ; 
    }
};