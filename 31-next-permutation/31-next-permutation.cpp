class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int i;
        int j;
        int k=0;
        if(n==1)
            return;
        for(i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                k=1;
                break;
            }
        }
        if(k==0){
            reverse(nums.begin(),nums.end());
        }
        else{
        for(j=n-1;j>i;j--){
            if(nums[j]>nums[i])
                break;
        }
                swap(nums[i],nums[j]);     
        reverse(nums.begin()+i+1,nums.end());
        }
    }
};