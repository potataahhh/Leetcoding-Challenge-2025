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

TC: O(nlogn)
SC: O(1)

+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        return numBottles +(numBottles-1)/(numExchange-1);
    }
};     

TC: O(1)
SC: O(1)
