class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
       vector<int>ans;
       string s= "123456789" ;
       for(int len=to_string(low).size(); len<=to_string(high).size(); len++){
        for(int i=0; i<=9-len; i++){
            int num= stoi(s.substr(i, len));
            if(num>=low && num<=high)
            ans.push_back(num);
        }
       }
       return ans;
    }
};