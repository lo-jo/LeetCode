#include <vector>
#include <iostream>
#include <algorithm>
using std::string;
using std::vector;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        std::vector<int> merged(nums1.size() + nums2.size());
        double median;
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), merged.begin());
        int length = merged.size();
        if (length%2 != 0)
            median = merged[length/2];
        else{
            median = merged[length/2 -1] + merged[length/2];
            median /= 2;
        }
        return median;
    }
};

int main(){
    Solution solution;
    std::vector<int> nums1 = {1, 2};
    std::vector<int> nums2 = {3, 4};
    std::cout << solution.findMedianSortedArrays(nums1, nums2) << std::endl;;
}