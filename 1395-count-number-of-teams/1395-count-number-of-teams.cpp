class Solution {
public:
    int numTeams(vector<int>& rating) {
       int n= rating.size();
       int ans=0;
       for(int j=0; j<n ; j++){
        int leftsmaller=0, leftgreater=0;
        int rightsmaller=0, rightgreater=0;
       
       for(int i=0; i<j; i++){
        if(rating[i]<rating[j])
            leftsmaller++;
        else
            leftgreater++;
        }

        for(int k=j+1;k<n;k++ ){
            if(rating[k]>rating[j])
                rightgreater++;
            else
                rightsmaller++;
            }
            ans +=leftsmaller *rightgreater;
            ans+= rightsmaller* leftgreater;
        }
        return ans;

       }
    
};