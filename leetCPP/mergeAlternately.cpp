#include <string>
#include <iostream>

using std::string;

class Solution {

public:
    string mergeAlternately(string word1, string word2) {
        string res;
        int i = 0;
        for (int i = 0; i < word1.length(); i++){
            res += word1[i];
            if (i < word2.length())
                res += word2[i];
        }
        if (word1.length() < word2.length()){
            res += word2.substr(word1.length(), word2.length()); 
        }
        // std::cout << "THIS IS MY RES " << res << std::endl;
        return res;
    }
};

int main(){
    Solution sol;
    sol.mergeAlternately("rlvrpyrhcxbceffrgiy", "pq");
}