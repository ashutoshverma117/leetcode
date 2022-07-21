class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size();
        int maximum=INT_MIN;
        int sum=0;
        int minimum=INT_MAX;
        for(int i=0;i<n;i++){
            if(sum<0)
                sum=0;
            sum=sum+nums[i];
            maximum=max(maximum,sum);
        }
        sum=0;
        for(int i=0;i<n;i++){
            if(sum>0)
                sum=0;
            sum=sum+nums[i];
            minimum=min(minimum,sum);
        }
        if(abs(maximum)>abs(minimum)){
            return abs(maximum);
        }
        else{
            return abs(minimum);
        }
    }
};