class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int maximum=INT_MIN;
        int pro=1;
        for(int i=0;i<n;i++){
            if(pro==0)
                pro=1;
            pro=pro*nums[i];
            maximum=max(maximum,pro);
        }pro=1;
        for(int i=n-1;i>=0;i--){
            if(pro==0)
                pro=1;
            pro=pro*nums[i];
            maximum=max(maximum,pro);
        }
        return maximum;
    }
};