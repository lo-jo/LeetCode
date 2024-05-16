#include <string>
#include <vector>
#include <iostream>

using std::vector;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        std::cout << "oh" << std::endl;
        int notzero = 0;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] != 0){
                nums[notzero] = nums[i];
                notzero++;
            }
        }
        for (int i = notzero; i < nums.size(); i++){
            nums[i] = 0;
        }
    }
};

int main() {
    Solution solution;
    std::vector<int> vect = {0, 1, 0, 2, 3};
    solution.moveZeroes(vect);
}