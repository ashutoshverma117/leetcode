class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int vol=0;
        int maximum=INT_MIN;
        int i=0;
        int j=n-1;
        while(i<j){
            vol=min(height[i],height[j])*abs(i-j);
            if(height[i]<height[j])
                i++;
            else
                j--;
            maximum=max(maximum,vol);
        }
        return maximum;
    }
};