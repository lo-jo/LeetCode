// Given a string s, reverse only all the vowels in the string and return it.

// The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

 

// Example 1:

// Input: s = "hello"
// Output: "holle"
// Example 2:

// Input: s = "leetcode"
// Output: "leotcede"
 

#include <iostream>
#include <string>
#include <algorithm>
using std::string;
using std::swap;

class Solution {
public:


    bool isVowel(char c){
        if (c == 'a' || c == 'e' || c == 'i'|| c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I'|| c == 'O' || c == 'U' )
            return true;
        return false;
    }
    string reverseVowels(string s) {
      int i = 0, j = s.size()-1;
        while(i<j){
            if(isVowel(s[i]) && !isVowel(s[j]))
                j--;
            else if(!isVowel(s[i]) && isVowel(s[j]))
                i++;
            else if(isVowel(s[i]) && isVowel(s[j])){
                swap(s[i], s[j]);
                i++;
                j--;
            }else{
                i++;
                j--;
            }
        }
        return s;
    }
};

int main(){
    Solution vow;
    std::cout << vow.reverseVowels("racecar") << std::endl;

}