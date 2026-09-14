class Solution {
public:
    bool isRectangleOverlap(vector<int>& rect1, vector<int>& rect2) {
       int width= min(rect1[2], rect2[2]) - max(rect1[0], rect2[0]);
       int height= min(rect1[3], rect2[3])- max(rect1[1], rect2[1]);

       if(width>0 && height>0){
        return true;
       }
       return false;

    }
};