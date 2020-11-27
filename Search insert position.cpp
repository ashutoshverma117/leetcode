Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

 

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4
Example 4:

Input: nums = [1,3,5,6], target = 0
Output: 0
Example 5:

Input: nums = [1], target = 0
Output: 0







class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int p=0;
        if(target==0)
         return p;
         if(target>nums[nums.size()-1])
            {
                p=nums.size();
            }
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {p=i;
             break;}
            else if(nums[i]!=target)
            {
                if(target<nums[i])
                {
                    p=i;
                    break;
                }
                    
            }
           
            
        }
        return p;
        
    }
};
