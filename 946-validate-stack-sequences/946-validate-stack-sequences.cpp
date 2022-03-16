class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i=0;
        int j=0;
        stack<int>s;
        while(i<pushed.size()){
            s.push(pushed[i]);
            while(s.size()>0 && s.top()==popped[j]){
                 s.pop();
                j++;
            }
            i++;
        }
        if(j==popped.size())
            return true;
        else 
            return false;
    }
};