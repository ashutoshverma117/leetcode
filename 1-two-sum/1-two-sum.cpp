class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>v;
        map<int,int>mappi;
        for(int i=0;i<n;i++){
            mappi[nums[i]]=i;
        }
        for(int i=0;i<n;i++){
           if(mappi.find(target-nums[i])!=mappi.end() && mappi[target-nums[i]]!=i){
                v.push_back(i);
                v.push_back(mappi[target-nums[i]]);
               break;
        }
        }
        return v;
        
    }
};