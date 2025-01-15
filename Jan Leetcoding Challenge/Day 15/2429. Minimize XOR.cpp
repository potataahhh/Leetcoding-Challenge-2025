class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int res = 0, SBF = __builtin_popcount(num2);
        
        for (int i = 31; i >= 0 && SBF > 0; i--) {
            if (num1 & (1 << i)) {
                res |= (1 << i);
                SBF--;
            }
        }

        for (int i = 0; i < 32 && SBF > 0; i++) {
            if (!(res & (1 << i))) {
                res |= (1 << i);
                SBF--;
            }
        }
        
        return res;
    }
};
