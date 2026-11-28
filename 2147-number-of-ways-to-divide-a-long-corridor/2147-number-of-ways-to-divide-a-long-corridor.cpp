class Solution {
public:
int M= 1e9+7;
    int numberOfWays(string corridor) {
      int n= corridor.size();
      vector<int>seat_pos;
      for(int i=0;i<n;i++){
        if( corridor[i]=='S'){
        seat_pos.push_back(i);
      }  
      }

      if(seat_pos.size() %2 !=0 || seat_pos.size()==0){
        return 0;
      }
      long long result=1;
      int prev_idx= seat_pos[1];
      for(int i=2;i<seat_pos.size();i+=2){
        int lenght= seat_pos[i]- prev_idx;
        result= (result* lenght)%M;
        prev_idx= seat_pos[i+1];
      }
      return result;

    }
};