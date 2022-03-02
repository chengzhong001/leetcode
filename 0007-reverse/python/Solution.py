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

    def reverse1(self, x: int) -> int:
        minval = (-2) ** 31
        maxval = 2**31 - 1
        temp = str(x)
        if x < 0:
            return (
                int("-" + temp[:0:-1])
                if minval <= int("-" + temp[:0:-1]) <= maxval
                else 0
            )
        else:
            return int(temp[::-1]) if minval <= int(temp[::-1]) <= maxval else 0


if __name__ == "__main__":
    s = Solution()
    print(s.reverse1(123))
    print(s.reverse1(-123))
    print(s.reverse1(120))
    print(s.reverse1(0))
