class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n=chalk.size();
        int totalchalksum=0;
        for(int i=0; i<n; i++){
            totalchalksum+= chalk[i];
            if(totalchalksum>k){
                break;
            }

        }
        int remainchalk= k% totalchalksum;
        for(int i=0; i<n; i++){
            if(remainchalk<chalk[i]){
                return i;
            }
            remainchalk -= chalk[i];
        }
        return -1; 
    }
};