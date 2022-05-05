class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int l=0;
        int h=n-1;
        int count=0;
        while(l<h){
            if(nums[l]+nums[h]==k){
                count++;
                l++;
                h--;
            }
            else if(nums[l]+nums[h]>k){
                h--;
            }
            else
                l++;
        }
        return count;
    }
};