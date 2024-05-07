// Given an input string s, reverse the order of the words.

// A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

// Return a string of the words in reverse order concatenated by a single space.

// Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

 

// Example 1:

// Input: s = "the sky is blue"
// Output: "blue is sky the"
// Example 2:

// Input: s = "  hello world  "
// Output: "world hello"
// Explanation: Your reversed string should not contain leading or trailing spaces.

#include <iostream>
#include <string>
using std::string;

class Solution {
public:
    int findClosestSpace(int start, string s){
        while(start >= 0){
            if (isspace(s[start])){
                return start;
            }
            start--;
        }
        return start;
    }

    string trimString(string s, int start, int end){
        string str;
        while(start <= end){
            while(isspace(s[start]))
                start++;
            std::cout << "str trim " << s[start] << std::endl;
            str += s[start];
            start++;
        }
        std::cout << "FINAL STR [" << str << str.size() << "]" << std::endl;
        if (str.size() > 0){
            std::cout << "WHY IS THERE A SPACE" << std::endl;
            return str + " ";
        }

        return str;
    }


    string reverseWords(string s) {
        int i = s.length()-1;
        string str;

        while (i >= 0){
            while (isspace(s[i])){
                i--;
                if (i <= 0){
                    break;
                }
            }
                
            std::cout << i << std::endl;
            int start = findClosestSpace(i, s);
            string token = trimString(s, start +1, i);
            // std::cout << "token : " << token << std::endl;
            str += token;
            i = start;
            if (start == 0)
                break;
        }
        string estr = str.substr(0, str.length() -1);
        std::cout << "HERE IS THE FINAL RESULT [" << estr << "]" << std::endl;
        return estr;
    }
};

int main(){
    Solution string;
    string.reverseWords("4");
}