class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>v(n);
        vector<int>k(n);
        int count=0;
        v[0]=height[0];
        for(int i=1;i<n;i++){
            v[i]=max(v[i-1],height[i]);
        }
        k[n-1]=height[n-1];
        for(int j=n-2;j>=0;j--){
            k[j]=max(k[j+1],height[j]);
        }
        for(int i=0;i<n;i++){
            count+=min(v[i],k[i])-height[i];
        }
        return count;
    }
};