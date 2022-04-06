class Solution {
    long long count(int n,vector<int>v){
        long count=0;
        for(long long i=2;i*i<n;i++){
            if(v[i]==0){
                for(long long j=i*i;j<n;j=j+i){
                    v[j]=1;
                }
            }
        }
        for(long long i=2;i<n;i++){
            if(v[i]==0)count++;
        }
        return count;
    }
public:
    int countPrimes(int n) {
        vector<int>v(n+1,0);
        return count(n,v);
    }
};