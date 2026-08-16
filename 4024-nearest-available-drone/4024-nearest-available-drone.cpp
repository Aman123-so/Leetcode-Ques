class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int ans= -1;
        int n= drones.size();
        int mindis=INT_MAX;
        for(int i=0; i<n;i++){
            int a= drones[i][0];
            int b= drones[i][1];
            int range= drones[i][2];

            int dist= abs(a-target[0]) + abs(b-target[1]);
            if(dist <= range){
                if(dist<mindis){
                    mindis= dist;
                    ans= i;
                }
            }
        }
        return ans;
    }
};