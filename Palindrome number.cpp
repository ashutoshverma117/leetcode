Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.

Follow up: Could you solve it without converting the integer to a string?

 

Example 1:

Input: x = 121
Output: true
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
Example 4:

Input: x = -101
Output: false







class Solution {
public:
    bool isPalindrome(int x) {
        int rev=0,p=0;
        int n=x;
        bool t=true;
        bool f=false;
        while(x!=0)
        {
            p=x%10;
            x=x/10;
            if(rev>INT_MAX/10)return 0;
            if(rev<INT_MIN/10)return 0;
            rev=rev*10+p;
        }
        if(n==rev && rev>-1)
            return t;
        else
            return f;
        
    }
};
