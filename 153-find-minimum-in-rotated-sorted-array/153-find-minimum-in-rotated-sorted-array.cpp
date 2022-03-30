class Solution {
public:
    int findMin(vector<int>& nums) {

        int n=nums.size();
        int l=0;
        int h=n-1;
        if(n==1)
            return nums[0];
        while(l<=h){
            int mid=(l+h)/2;
            if(nums[mid]<nums[(mid+1)%n] && nums[mid]<nums[(mid-1+n)%n])
                return nums[mid];
            else if(nums[mid]>nums[h])
                l=mid+1;
            else
                h=mid-1;
        }
        return NULL;
    }
};