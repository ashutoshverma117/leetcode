class Solution {
public:
    int hammingWeight(uint32_t n) {
        int sum=0;
        while(n){
        sum+=1&n;
        n=n>>1;    
        }
        return sum;
        
    }
};