class Solution {
public:
    int compareVersion(string version1, string version2) {
        int n=version1.length();int m=version2.length();int i=0,j=0;
        int num=0;
        int nums2=0;
        while(i<n || j<m){
            while(i<n && version1[i]!='.'){
                num=num*10+(version1[i]-'0');
                ++i;
            }
            while(j<m && version2[j]!='.'){
                nums2=nums2*10+(version2[j]-'0');
                    ++j;
            }
            cout<<num<<endl;
            cout<<nums2<<endl;
            if(num>nums2)
                return 1;
            if(num<nums2)
                return -1;
            ++i;
            ++j;
            num=0;
            nums2=0;
            
        }return 0;
        
    }
};