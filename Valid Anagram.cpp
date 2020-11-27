Given two strings s and t , write a function to determine if t is an anagram of s.

Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false
Note:
You may assume the string contains only lowercase alphabets.

Follow up:
What if the inputs contain unicode characters? How would you adapt your solution to such case?

Accepted








class Solution {
public:
    bool isAnagram(string s, string t) {
        
        bool m=true;
        bool f=false;
        int count[256]={0},flag=0;
        if(s.length()!=t.length())
          flag=1;;
        for(int i=0;i<s.length();i++)
        {
            count[s[i]]++;
        }
        for(int i=0;i<t.length();i++)
        {
            count[t[i]]--;
        }
        for(int j=0;j<256;j++)
        {
            if(count[j]!=0)
            {flag=1;
            break;}
        }
        if(flag==1)
            return f;
        else
            return m;
       
        
    }
};
