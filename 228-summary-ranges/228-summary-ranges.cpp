class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>v;
        int n=nums.size();
        if(n==0 || n==1){
        if(n==0){
            return v;
        }
        if(n==1){
            v.push_back(to_string(nums[0]));
        }
        }
        else{
        
        for(int i=0;i<n-1;i++){
            int start=nums[i];
            while(i<n-1 && nums[i]+1==nums[i+1]){
                i++;
                continue;
            }
            if(start==nums[i]){
                v.push_back(to_string(start));
            }
            else{
                 v.push_back(to_string(start)+"->"+to_string(nums[i]));   
            }
                
        }
        if(nums[n-1]!=nums[n-2]+1)
            v.push_back(to_string(nums[n-1]));
        }
        return v;
        
    }
};