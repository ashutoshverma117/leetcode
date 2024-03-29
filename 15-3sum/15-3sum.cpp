class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size()<3){
           vector<vector<int>>res;
            return res;
        }
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        for(int i=0;i<=nums.size()-3;i++){
            if(i==0 || (i>0 && nums[i]!=nums[i-1])){
                int l=i+1, h=nums.size()-1,sum=0-nums[i];
                while(l<h){
                    if(nums[l]+nums[h]==sum){
                        vector<int>temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[l]);
                        temp.push_back(nums[h]);
                        res.push_back(temp);
                        while(l<h && nums[l]==nums[l+1])l++;
                        while(l<h && nums[h]==nums[h-1])h--;
                        l++;h--;
                    }
                    else if(nums[l]+nums[h]<sum)l++;
                    else h--;
                }
            }
        }
        return res;
        
    }
};