class Solution {
public:
    string frequencySort(string s) {
        int n=s.length();
        priority_queue<pair<int,char>>p;
        unordered_map<char,int>mappi;
        string sn="";
        for(int i=0;i<n;i++){
            mappi[s[i]]++;
        }
        for(auto it:mappi){
            p.push({it.second,it.first});
        }
        while(!p.empty()){
            pair<int,char>k=p.top();
            p.pop();
            int fre=k.first;
            while(fre>0){
                //sn=sn+k.first;
                sn.push_back(k.second);
                fre--;
            }
        }
        return sn;
    }
};