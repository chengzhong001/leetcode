from typing import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for key, value in enumerate(nums):
            newvalue = target-value
            if newvalue in nums and nums.index(newvalue)!= key :
                return [key, nums.index(newvalue)]

if __name__ == "__main__":
    nums = [2, 7, 11, 15]
    target = 9
    solution = Solution()
    print(solution.twoSum(nums, target))