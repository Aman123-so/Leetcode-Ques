class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
       
        int maxL= *max_element(lights.begin(),lights.end());
        int result=0;
        for(int a:arrivalTime){
            int c= a% period;
            int stop=0;
            if(c>=maxL){
                stop= period-c;
            }
            result= max(result,stop);
        }
        return result;
    }
};