class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int cut=0;
        int india=0;
        int pak=0;
        int k=0;
        if(n==1)
            return ;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                india=i;
                cut=nums[i];
                k=1;
                break;
            }
        }
        if(k==0){
            reverse(nums.begin(),nums.end());
        }
        else{
        for(int i=n-1;i>india;i--){
            if(nums[i]>cut){
                pak=i;
                break;
            }
        }
        
        swap(nums[india],nums[pak]);
        reverse(nums.begin()+india+1,nums.end());
        
        }
    }
};