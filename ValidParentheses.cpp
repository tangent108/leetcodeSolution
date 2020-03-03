/*


Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Note that an empty string is also considered valid.

Example 1:

Input: "()"
Output: true
Example 2:

Input: "()[]{}"
Output: true
Example 3:

Input: "(]"
Output: false
Example 4:

Input: "([)]"
Output: false
Example 5:

Input: "{[]}"
Output: true


*/




class Solution {
public:
    bool isValid(string s) {
        if(s.size()==0)
            return true;
        stack<char> stk;
        string str="(){}[]";
        for(int i=0;i<s.size();i++){
            if(s[i]==str[0] ||s[i]==str[2] ||s[i]==str[4]){
                stk.push(s[i]);
            }
            else{
                if(stk.size()!=0){
                if(s[i]==str[1] && stk.top()==str[0] && stk.size()){
                    stk.pop();
                    if(stk.size()==0 && (i==s.size()-1))
                        return true;
                }
                else if(s[i]==str[3] && stk.top()==str[2] && stk.size()){
                    stk.pop();
                    if(stk.size()==0 && (i==s.size()-1))
                        return true;
                }
                else if(s[i]==str[5] && stk.top()==str[4] && stk.size()){
                    stk.pop();
                    if(stk.size()==0 && (i==s.size()-1))
                        return true;
                }
                    else return false;
            }
                else return false;
            }
            
            }
        
        
        return false;
        }
        
};
