class Solution {
public:
    bool isAnagram(string s, string t) {
        map<int,int>mappi;
        for(int i=0;i<s.size();i++){
            mappi[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            // if(mappi.find(t[i])==mappi.end())
            //     mappi[t[i]]++;
            // else
            mappi[t[i]]--;
        }
        for(auto x:mappi){
            if(x.second!=0)
                return false;
        }return true;
    }
};