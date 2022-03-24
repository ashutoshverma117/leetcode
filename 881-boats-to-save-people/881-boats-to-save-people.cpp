class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int n=people.size();
        vector<int>vis(n,0);
        int count=0;
        int l=0;
        int h=n-1;
        while(h>l){
            if(people[h]+people[l]<=limit){
                vis[l]=1;
                vis[h]=1;
                h--;
                l++;
                count++;
            }
            else{
                count++;
                vis[h]=1;
                h--;
            }
        }
        for(int i=0;i<vis.size();i++){
            if(vis[i]!=1)
                count++;
        }
        return count;
    }
};