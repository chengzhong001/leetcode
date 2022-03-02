from typing import List


class Solution:
    def reverse(self, x: int) -> int:
        min_val = -(2**31)
        max_val = 2**31 - 1
        res = 0
        while x != 0:
            if x < 0:
                tmp = x % -10
                x = -(x // -10)
            else:
                tmp = x % 10
                x = x // 10
            res = res * 10 + tmp
            if res > max_val or res < min_val:
                return 0
        return res



if __name__ == "__main__":
    s = Solution()
    print(s.reverse(123))
    print(s.reverse(-123))
    print(s.reverse(120))
    print(s.reverse(0))
