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
    int fillProduct(vector<int> &nums, std::vector<int>::iterator it){
        int sum = 1;
        int i = 0;
        int flag = 0;
        std::cout << "CURRENT PRODUCT CALC" << *it << std::endl;
        while(i < nums.size()){
            if (nums[i] == *it){
                std::cout << "do nothing" << nums[i] << std::endl;
            }
            else {
                if (!flag){
                    std::cout << "find what to multiply ur number to" << std::endl;
                }
                std::cout<< nums[i]<< std::endl;
            }
            i++;
        }
        return sum;
    }
    vector<int> productExceptSelf(vector<int>& nums) {
        std::vector<int> res;
        for(std::vector<int>::iterator it = nums.begin(); it < nums.end(); it++){
            fillProduct(nums, it);
            
            
        }

        return res;
    }
};

int main(){
    Solution product;
    std::vector<int> vect = {1,2,3,4};
    product.productExceptSelf(vect);

}