// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

// You must write an algorithm that runs in O(n) time and without using the division operation.

 

// Example 1:
//                0 1 2 3
//               1*1 2*3 3*1
// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]
// Example 2:

// Input: nums = [-1,1,0,-3,3]
// Output: [0,0,9,0,0]

#include <iostream>
#include <vector>
using std::vector;

class Solution {
public:

    vector<int> productExceptSelf(vector<int>& nums) {
        std::vector<int> res(nums.size(), 1);
        int left = 1;
        int right = 1;

        for(int i = 0; i< nums.size(); i++){
            std::cout << nums[i] << std::endl;
            std::cout << "res " << res[i] << std::endl;
            res[i] *= left;
            left *= nums[i];
        }
        for (int i = nums.size() -1; i >= 0; i--){
            std::cout << nums[i] << std::endl;
            res[i] *= right;
            std::cout << "res " << res[i] << std::endl;
            right *= nums[i];
        }



        return res;
    }
};

int main(){
    Solution product;
    std::vector<int> vect = {1,2,3,4};
    product.productExceptSelf(vect);

}