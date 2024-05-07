
// You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in adjacent plots.

// Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return true if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule and false otherwise.

 

// Example 1:

// Input: flowerbed = [1,0,0,0,1], n = 1
// Output: true
// Example 2:

// Input: flowerbed = [1,0,0,0,1], n = 2
// Output: false

#include <iostream>
#include <vector>
#include <algorithm>
using std::vector;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        std::vector<int>::iterator it = flowerbed.begin();
        int planted = 0;

        while(it < flowerbed.end()-1){
            if (it == flowerbed.begin() && *(it) == 0)
            {
                if ( *(it+1) != 1){
                    *it = 1;
                    // std::cout << "PLANTED on FREESPOT " << *it << std::endl;
                    planted++;
            }
            }
            else if (*it == 0 && *(it-1) != 1 && *(it+1) != 1){
                *it = 1;
                // std::cout << "PLANTED on FREESPOT " << *it << std::endl;
                planted++;
            }
            // else 
            //     std::cout << *it << std::endl;
            it++;
        }

        if (*(flowerbed.end() - 1) == 0 ){
            std::cout << "PLANTED ON END OF VECTOR" << std::endl;
            if (flowerbed.size() == 1){
                *(flowerbed.end() - 1) = 1;
                planted++;
            }
            else if ( *(flowerbed.end() - 2) != 1){
                *(flowerbed.end() - 1) = 1;
                planted++;
            }
        }
        std::cout << "TOTAL PLAnTED " << planted << std::endl;
        if (planted < n){
            return false;
        }
            
        else 
            return true;
    }
};

int main(){
    Solution flower;
    std::vector<int> flowerbed = {0};
    std::cout << "RESULT >> " << flower.canPlaceFlowers(flowerbed, 1) << std::endl;
}