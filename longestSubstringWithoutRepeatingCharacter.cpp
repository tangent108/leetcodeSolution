/*

Given a string, find the length of the longest substring without repeating characters.
Example 1.
Input: "abcabcbb"
Output: 3 
Explanation: The answer is "abc", with the length of 3.

Example 2.
Input: "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.

Example 3.
Input: "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3. 
             Note that the answer must be a substring, "pwke" is a subsequence and not a substring.

*/

#include<iostream>
#include<set>
#include<string>

using namespace std;

int longestSubstringWithoutRepeatingCharacter(string s){
    int n = s.size();
    set<char> st;
    int ans =0,i=0,j=0;
    while(i < n && j < n){
        auto it = st.find(s.at(j));
        if(it==st.end()){
            st.insert(s.at(j++));
            ans = max(ans,j-i);
        }
        else{
            st.erase(s[i++]);
        }
    }
    return ans;   
}
int main(){
    string s1="abcabccbb";
    string s2="bbbbb";
    string s3="pwwkew";
    cout<<longestSubstringWithoutRepeatingCharacter(s1)<<endl;
    cout<<longestSubstringWithoutRepeatingCharacter(s2)<<endl;
    cout<<longestSubstringWithoutRepeatingCharacter(s3)<<endl;
}