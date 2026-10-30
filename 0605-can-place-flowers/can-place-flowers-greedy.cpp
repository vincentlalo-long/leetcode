class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0  ; 
        for(int i = 0 ; i < flowerbed.size() && count < n ; i++){
            if(flowerbed[i] == 0 ){
                bool leftSide = (i == 0) || (flowerbed[i-1] == 0 ) ;
                bool rightSide = (i == flowerbed.size() - 1) || (flowerbed[i+1] == 0 ) ;
                if(leftSide && rightSide) {
                    flowerbed[i] = 1 ;
                    count++ ; 
                } 
            }
        }
        return count >= n ;
    }
};