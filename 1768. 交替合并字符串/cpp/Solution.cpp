#include <iostream>
using namespace std;
class Solution
{
public:
    // 常规解法
    string mergeAlternately(string word1, string word2)
    {
        string res;
        if (word1.size() < word2.size())
        {
            for (size_t i = 0; i < word1.size(); i++)
                res = res + word1[i] + word2[i];
            res = res + word2.substr(word1.size());
        }
        else
        {
            for (size_t i = 0; i < word2.size(); i++)
                res = res + word1[i] + word2[i];
            res = res + word1.substr(word2.size());
        }
        return res;
    }

    // 递归
    string mergeAlternately1(string word1, string word2)
    {
        if (word1.size() == 1 && word2.size() == 1)
            return word1.substr(0, 1) + word2.substr(0, 1);
        else if (word1.size() > 1 && word2.size() == 1)
            return word1.substr(0, 1) + word2.substr(0, 1) + word1.substr(1);
        else if (word1.size() == 1 && word2.size() > 1)
            return word1.substr(0, 1) + word2.substr(0, 1) + word2.substr(1);

        return mergeAlternately(word1.substr(0, 1), word2.substr(0, 1)) + mergeAlternately(word1.substr(1), word2.substr(1));
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
