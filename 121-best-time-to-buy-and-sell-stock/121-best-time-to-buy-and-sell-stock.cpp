class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minimum=INT_MAX;
        int diff=0;
        for(int i=0;i<n;i++){
            if(minimum>prices[i])
                minimum=prices[i];
            diff=max(diff,prices[i]-minimum);
        }
        return diff;
    }
};