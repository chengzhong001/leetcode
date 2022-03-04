#include <iostream>
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;
        int y = x;
        int res = 0, tmp = 0;
        while (x > 0)
        {
            tmp = x % 10;
            x /= 10;
            if (res > INT_MAX / 10 || (res == INT_MAX / 10 && tmp > 7)) return 0;
            if (res < INT_MIN / 10 || (res == INT_MIN / 10 && tmp < -8)) return 0;
            res = res * 10 + tmp;
        }
       
        if (res == y)
            return true;
        return false;
    }
};

int main(int argc, char const *argv[])
{
    std::cout << Solution().isPalindrome(1234567899) << std::endl;
    return 0;
}
