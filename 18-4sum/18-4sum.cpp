class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>v;
        // if(nums.size()<4)
        //     return v;
        // for(int i = 0;i<n;i++)
        //     cout<<nums[i]<<endl;
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int left=j+1;
                int right=n-1;
                int sum=nums[i]+nums[j];
                int find=target-sum;
                while(left<right){
                    if((nums[left]+nums[right])<find){
                        left++;
                    }
                    else if((nums[left]+nums[right])>find){
                        right--;
                    }
                    else{
                    vector<int>k;
                     k.push_back(nums[i]);
                     k.push_back(nums[j]);
                     k.push_back(nums[left]);
                    k.push_back(nums[right]);
                        v.push_back(k);
                    while(left<right && nums[left]==nums[left+1])
                        left++;
                    while(left<right && nums[right]==nums[right-1])
                        right--;
                    left++;
                    right--;
                    }
                }
                
                while(j<n-2 && nums[j]==nums[j+1])
                    j++;
            }
            while(i<n-3 && nums[i]==nums[i+1])
                i++;
            
        }
        return v;
        
    }
};