class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>v;
        vector<int>k(n);
        v.push_back(height[0]);
        for(int i=1;i<n;i++){
            v.push_back(max(v[i-1],height[i]));
        }
        k[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            k[i]=max(k[i+1],height[i]);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans=ans+min(v[i],k[i])-height[i];
        }
        return ans;
    }
};