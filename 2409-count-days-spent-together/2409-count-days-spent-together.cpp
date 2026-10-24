class Solution {
public:

    int finddayOfYear(string data, vector<int>&cumMonthdays){
        int month= stoi(data.substr(0,2));
        int days= stoi(data.substr(3));

        return cumMonthdays[month-1]+ days;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
       vector<int>Monthdays={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31} ;

       vector<int>cumMonthdays(13,0);

       cumMonthdays[1]=31;
       for(int i=2; i<12; i++){
        cumMonthdays[i]= cumMonthdays[i-1]+ Monthdays[i-1];
       }

       int arriveAliceDay= finddayOfYear(arriveAlice, cumMonthdays );
       int leaveAliceDay= finddayOfYear(leaveAlice, cumMonthdays );

       int arriveBobDay= finddayOfYear(arriveBob, cumMonthdays );
       int  leaveBobDay= finddayOfYear(leaveBob, cumMonthdays );

       int overlap= min(leaveAliceDay,leaveBobDay)  - max(arriveAliceDay ,arriveBobDay)+1;

       return overlap <0 ?0:overlap;

    }
};