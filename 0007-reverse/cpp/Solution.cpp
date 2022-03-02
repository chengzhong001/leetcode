/**
 * @file Solution.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-03-02
 * @details 7. 整数反转
 * @copyright Copyright (c) 2022
 * 
 */
#include <limits.h>
#include <iostream>

class Solution {
public:
    int reverse(int x) {
        int res = 0;
        while (x) {
            int tmp = x % 10;
            x /= 10;
            if (res > INT_MAX / 10 || (res == INT_MAX / 10 && tmp > 7)) return 0;
            if (res < INT_MIN / 10 || (res == INT_MIN / 10 && tmp < -8)) return 0;
            res = res * 10 + tmp;
        }
        return res;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    std::cout <<Solution().reverse(123) << std::endl;
    std::cout <<Solution().reverse(-123) << std::endl;
    return 0;
}
