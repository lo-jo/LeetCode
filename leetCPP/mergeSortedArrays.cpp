#include<iostream>
#include<vector>
using std::vector;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums(m+n);
        int num = 0;
        int i = 0;
        int j = 0;
        int p = 0;
        while(i < m && j < n){

            if(nums1[i] <= nums2[j]){
                nums[num] = nums1[i];
                // std::cout << "nums[num]" << nums[num] << std::endl;
                i++;
            }
            else{
                nums[num] = nums2[j];
                // std::cout << "nums[num]" << nums[num] << std::endl;
                j++;
            }
            num++;
        }
        while(i < m){
            nums[num] = nums1[i];
            // std::cout << "numsi,m[num]" << nums[num] << std::endl;
            num++;
            i++;
        }
        while(j < n){
            nums[num] = nums2[j];
            // std::cout << "numsj,n[num]" << nums[num] << std::endl;
            num++;
            j++;
        }
        // nums1.erase(nums1.begin(), nums1.end());
        while(p < nums.size()){
            nums1[p] = nums[p];
            std::cout << nums1[p] << std::endl;
            p++;
        }
    }
};

int main(){
    Solution solution;
    vector<int> one = {1,2,3,0,0,0};
    vector<int> two = {2,5,6};
    solution.merge(one, 3, two, 3);
}