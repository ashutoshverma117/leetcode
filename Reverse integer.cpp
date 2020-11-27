Given a 32-bit signed integer, reverse digits of an integer.

Note:
Assume we are dealing with an environment that could only store integers within the 32-bit signed integer range: [−231,  231 − 1]. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.

 

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
Example 4:

Input: x = 0
Output: 0





class Solution {
public:
    int reverse(int x) {
        int h,k=0;
        while(x!=0)
        {
            h=x%10;
            x=x/10;
            if(k>INT_MAX/10 ||k==INT_MAX/10 && h>7)return 0;
            if(k<INT_MIN/10 ||k==INT_MIN/10 && h<-8)return 0;
            k=k*10+h;
        }
       return k; 
    }
};
