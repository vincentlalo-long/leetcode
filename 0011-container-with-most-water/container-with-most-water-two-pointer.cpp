class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0 , right = height.size()-1 ; 
        int maxContainer = 0 ; 
        while(left < right) {
            int horizontal = right - left ; 
            int check = horizontal* min(height[left] , height[right]) ;
            maxContainer = max(maxContainer , check) ;
            if(height[left] < height[right]) left++ ;
            else right-- ; 
        }
        return maxContainer ;
    }
};