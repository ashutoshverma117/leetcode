class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        map<int,int>mappi;
        map<int,int>mappik;
        int n=tops.size();
        int count=0;
        int cut=0;
        int put=0;
        int cuti=0;
        int puti=0;
        for(int i=0;i<tops.size();i++){
            mappi[tops[i]]++;
        }
         for(int i=0;i<bottoms.size();i++){
            mappik[bottoms[i]]++;
        }
        for(auto i:mappi){
            if(i.second>=n/2){
                cut=i.first;
                cuti=i.second;
            }
        }
        for(auto i:mappik){
            if(i.second>=n/2){
                put=i.first;
                puti=i.second;
            }
        }
        if(cuti>puti){
        for(int i=0;i<n;i++){
            if(tops[i]!=cut){
                if(bottoms[i]==cut)
                    count++;
                else
                    return -1;
            }
        }
        }
        else{
            for(int i=0;i<bottoms.size();i++){
            if(bottoms[i]!=put){
                if(tops[i]==put)
                    count++;
                else
                    return -1;
            }
        }   
        }
            return count;
        
    }
};