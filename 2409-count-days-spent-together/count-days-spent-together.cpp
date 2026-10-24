class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int> dayperMonth  = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31} ;
        vector<int> prefix(13 , 0) ; 
        for(int i = 0 ; i < 12 ; i++){
            prefix[i+1] = prefix[i] + dayperMonth[i] ;
        }
        auto toDay = [&](const string& s){
            int month = stoi(s.substr(0,2)) ;
            int day = stoi(s.substr(3,2)) ;
            return prefix[month-1] + day ;
        };
        int a1 = toDay(arriveAlice) ; 
        int a2 = toDay(leaveAlice) ;
        int b1 = toDay(arriveBob) ; 
        int b2 = toDay(leaveBob) ; 
        int res = 0 ; 
        res = max(0 , (min(a2,b2) - max(a1,b1) + 1 )) ; 
        return res ;

    }
};