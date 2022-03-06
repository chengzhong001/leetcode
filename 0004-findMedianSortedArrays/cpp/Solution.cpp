/**
 * @file Solution.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-03-06
 * @details 4. 寻找两个正序数组的中位数
 * @copyright Copyright (c) 2022
 * 
 */
#include <vector>
#include <iostream>

using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        std::vector<int> nums3;

        nums3.insert(nums3.end(), nums1.begin(), nums1.end());
        nums3.insert(nums3.end(), nums2.begin(), nums2.end());
        sort(nums3.begin(), nums3.end());
        if (nums3.size() % 2 == 0)
            return (nums3[nums3.size() / 2] + nums3[nums3.size() / 2 - 1]) / 2.0;
        return nums3[nums3.size() / 2];
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2, 4};
 
    std::cout << Solution().findMedianSortedArrays(nums1, nums2) << std::endl;
    return 0;
}
