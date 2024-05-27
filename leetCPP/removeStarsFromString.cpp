#include <iostream>
#include <vector>
using std::vector;
using std::string;

class Solution {
public:
    string removeStars(string s) {
       for(std::string::iterator it = s.begin(); it < s.end(); it++){
            if (*it == '*'){
                s.erase(it -1, it +1);
                // s.erase(it-1);
                it -= 2;
            }

        }

        return s;
    }
};

int main(){
    Solution solution;
    std::cout << solution.removeStars("leet**cod*e") << std::endl;
    std::cout << solution.removeStars("erase*****") << std::endl;
    
}