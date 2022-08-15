class Solution {
public:
    int romanToInt(string s) {
        map<char,int>mappi={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int sum=0;
        for(int i=0;i<s.length()-1;i++){
            if(mappi[s[i]]<mappi[s[i+1]]){
                sum=sum-mappi[s[i]];
            }
            else{
                sum=sum+mappi[s[i]];
            }
        }
        sum+=mappi[s[s.length()-1]];
        return sum;
        
    }
};