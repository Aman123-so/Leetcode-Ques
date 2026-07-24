class Solution {
public:
    bool rotateString(string s, string goal) {
        int n= s.size();
        int m= goal.size();
        if(n!= m)
        return false;
        for(int i=0; i<n ; i++){
            if(s== goal)
            return true;

            char ch= s[0];
            s.erase(s.begin());
            s.push_back(ch);

        }
        return false;
    }
};