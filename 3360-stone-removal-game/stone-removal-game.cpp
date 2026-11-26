class Solution {
public:
    bool canAliceWin(int n) {
        if ( n < 10) return false ;
        int remove = 10 ;
        bool aliceTurn = true ;
        while(n >= remove){
            n -= remove ;
            remove--;
            aliceTurn = !aliceTurn ;
        }
        return !aliceTurn;

    }
};