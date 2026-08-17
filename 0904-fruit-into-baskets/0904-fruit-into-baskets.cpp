class Solution {
public:
    int totalFruit(vector<int>& fruits) {
      
       unordered_map<int, int>freq;
        int n = fruits.size();
       int i=0, j=0;
       int count=0;
       while(j<n){
        freq[fruits[j]]++;
        if(freq.size()<=2)
        count= max(count,j-i+1);
        
        else{
            freq[fruits[i]]--;
            if(freq[fruits[i]]==0){
                freq.erase(fruits[i]);
            }
                i++;
        }
         j++;
        }
        return count;
       }
};