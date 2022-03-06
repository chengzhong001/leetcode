#include <string>
#include <iostream>
#include <math.h>
using namespace std;

class Solution
{
public:
    int myAtoi(string s)
    {
        string res;
        int resnum = 0, flag = 0;
        if (s.size() == 0)
            return 0;
        bool isNegative = false;
        for (size_t i = 0; i < s.size(); i++)
        {
            if (res.size() == 0 && s[i] == ' ' && flag == 0)
                continue;

            if (res.size() == 0 && s[i] == '-')
            {
                isNegative = true;
                flag += 1;
                continue;
            }
            if (res.size() == 0 && s[i] == '+')
            {
                isNegative = false;
                flag += 1;
                continue;
            }

            if (isNegative == true || res.size() >= 0)
            {
                if (s[i] < '0' || s[i] > '9')
                    break;
            }

            if (flag > 1)
                break;

            res += s[i];
        }

        if (res.size() == 0 && isNegative)
            return 0;

        for (size_t i = 0; i < res.size(); i++)
        {
            if (resnum > INT_MAX / 10 || (resnum == INT_MAX / 10 && res[i] > '7'))
            {
                return (isNegative ? INT_MIN : INT_MAX);
            }

            resnum = resnum * 10 + (res[i] - '0');
        }

        if (isNegative)
            resnum = -resnum;
        return resnum;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    string s = "-x21d";
    std::cout << Solution().myAtoi(s) << std::endl;
    s = "   -42";
    std::cout << Solution().myAtoi(s) << std::endl;
    s = "4193 with words";
    std::cout << Solution().myAtoi(s) << std::endl;
    s = "words and 987";
    std::cout << Solution().myAtoi(s) << std::endl;
    s = "-91283472332";
    std::cout << Solution().myAtoi(s) << std::endl;
    std::cout << INT_MIN << std::endl;
    s = "+1";
    std::cout << Solution().myAtoi(s) << std::endl;
    s = "+-12";
    std::cout << Solution().myAtoi(s) << std::endl;
    s = "  +  413";
    std::cout << Solution().myAtoi(s) << std::endl;
    return 0;
}
