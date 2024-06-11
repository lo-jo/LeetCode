
// Given an array of characters chars, compress it using the following algorithm:

// Begin with an empty string s. For each group of consecutive repeating characters in chars:

// If the group's length is 1, append the character to s.
// Otherwise, append the character followed by the group's length.
// The compressed string s should not be returned separately, but instead, be stored in the input character array chars. Note that group lengths that are 10 or longer will be split into multiple characters in chars.

// After you are done modifying the input array, return the new length of the array.

// You must write an algorithm that uses only constant extra space.

 

// Example 1:

// Input: chars = ["a","a","b","b","c","c","c"]
// Output: Return 6, and the first 6 characters of the input array should be: ["a","2","b","2","c","3"]
// Explanation: The groups are "aa", "bb", and "ccc". This compresses to "a2b2c3".

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using std::vector;

class Solution {
public:


    int compress(vector<char>& chars) {
        // count how nany occurences
        int beginner = chars.size();
        int i = 0;
        char current;
        int count = 0;
        std::vector<char> chariot;
        if (beginner == 1){
            chars.push_back('1');
            std::cout << "one tiny array " << chars[0] << chars[1] << chars.size() << std::endl;
            return 1;
        }
        else {
            while (i < beginner){
                // std::cout << chars[i];
                current = chars[i];
                // count = 1;
                // chars.push_back(chars[i]);
                while (chars[i] == current){
                    // std::cout<< chars[i];
                    count++;
                    i++;
                }
                // std::cout << count << std::endl;
                if (count == 1){
                    chars.push_back(current);
                    

                }
                else {
                    chars.push_back(current);
                    if (count < 10)
                        chars.push_back('0' + count);
                    else{
                        
                        }
                    }

                }
                count = 0;
                // chars.push_back(count);
                // i++;
            }

        }
        // i = 0;
        // while(i <= beginner){
        //     chars.erase(chars.begin());
        //     i++;
        // }
        chars.erase(chars.begin(), (chars.begin() + beginner));
        
        return chars.size();
    }


};

int main(){
    Solution compressed;
    std::vector<char> chariot {'a', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b'};
    // std::vector<char> single {'a'};
    std::cout << compressed.compress(chariot) << std::endl;
    int i = 0;
    std::cout << "FINAL"<< std::endl;
    while(chariot[i]){
        std::cout << chariot[i] << ".";
        i++;
    }
    // compressed.compress(single);

}