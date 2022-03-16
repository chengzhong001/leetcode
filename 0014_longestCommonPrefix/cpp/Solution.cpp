#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }
        string prefix = strs[0];
        for (int i = 1; i < strs.size(); ++i) {
            // std::cout << "strs[" << i << "] = " << strs[i] << std::endl;
            while (strs[i].find(prefix) != 0) {
                prefix.pop_back();
                // std::cout << "prefix: " << prefix << std::endl;
                if (prefix.empty()) {
                    return "";
                }
            }
        }
        return prefix;

    }
};

int main(int argc, char const *argv[])
{
    /* code */
    Solution s;
    vector<string> strs = {"flower","flow","flight"};
    cout << s.longestCommonPrefix(strs) << endl;

    strs = {"dog","racecar","car"};
    cout << s.longestCommonPrefix(strs) << endl;

    return 0;
}
