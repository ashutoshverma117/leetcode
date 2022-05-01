class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n+1);
        vector<int>k(n+1);
        vector<int>m(n);
        v[0]=nums[0];
        for(int i=1;i<n;i++){
            v[i]=v[i-1]*nums[i];
        }
        k[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            k[i]=k[i+1]*nums[i];
        }
        m[0]=k[1];
        m[n-1]=v[n-2];
        for(int i=1;i<n-1;i++){
            m[i]=v[i-1]*k[i+1];
        }
       return m; 
    }
};