Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
Example 4:

Input: s = "([)]"
Output: false
Example 5:

Input: s = "{[]}"
Output: true












class Solution {
public:
    bool isValid(string s) {
        stack<char>l;
        for(int i=0;i<s.length();i++)
        {
            char c=s[i];
            if(c=='(' || c=='[' || c=='{')
                l.push(c);
            else if(c==')' && l.empty()==false)
            {if(l.top()=='(')
                    l.pop();
                else
                    return false;}
            else if(c=='}' && l.empty()==false)
            {if(l.top()=='{')
                    l.pop();
                else
                return false;}
             else if(c==']' && l.empty()==false)
            {if(l.top()=='[')
                    l.pop();
                else
                return false;}
            else
                return false;
            
            }
        if(l.empty()==true)
            return true;
        else
            return false;
        
    }
};
