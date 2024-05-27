// Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

// A subsequence of a string is a new string 
// that is formed from the original string by 
// deleting some (can be none) of the characters without disturbing the 
// relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

 

// Example 1:

// Input: s = "abc", t = "ahbgdc"
// Output: true

#include <iostream>
using std::string;



class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;

        while(t[i]){
            if (t[i] == s[j]){
                j++;
            }
            i++;
        }
        return (j == s.length() ? true : false);
    }
};

int main(){
    Solution solution;
    std::cout << solution.isSubsequence("abc", "ahbgcd") << std::endl;
}