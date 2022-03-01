/**
 * @file Solution.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-03-01
 * @details 1. 两数之和
 * @copyright Copyright (c) 2022
 * 
 */

#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        for(int i = 0; i < nums.size(); i++){
        	if(hash.count(target - nums[i])) return {hash[target - nums[i]], i};
        	hash[nums[i]] = i;
		}
		return {-1, -1};
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    for(auto i : Solution().twoSum(nums, target))
    	std::cout << i << std::endl;
    
    return 0;
}
