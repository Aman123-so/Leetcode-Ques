class Solution {
public:
    int binaryGap(int n) {
        int position = 0;
        int lastOne = -1;
        int ans = 0;

        while (n > 0) {

            if (n & 1) {  // Current bit is 1

                if (lastOne != -1) {
                    ans = max(ans, position - lastOne);
                }

                lastOne = position;
            }

            n = n >> 1;   // Move to next bit
            position++;
        }

        return ans;
    }
};