class Solution {
public:
    int binary(int l,int h,vector<int>&nums,int target){
        while(l<=h){
            int mid=(l+h)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int put=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                put=i;
            }
        }
        if(binary(0,put-1,nums,target)==-1 && binary(put,n-1,nums,target)==-1)
            return -1;
        else if(binary(0,put-1,nums,target)!=-1)
            return binary(0,put-1,nums,target);
        else
            return binary(put,n-1,nums,target);
            
    }
};