class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int res = numBottles;
        int empt = numBottles;

        while(empt>=numExchange){
            res+=1;
            empt-=numExchange;
            empt++;
            numExchange++;
        }
        return res;
    }
};
