class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int res = numBottles;

        while(numBottles >= numExchange){
            int rem = numBottles % numExchange;
            int full = numBottles / numExchange;
            res+=full;
            numBottles = full + rem;
        }
        return res;
    }
};
