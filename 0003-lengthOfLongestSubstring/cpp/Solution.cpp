#include <string>
#include <iostream>
using namespace std;
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        if(s.size()>100000)
            return 0;
        string substr, max_substr;
        int start = 0;
        for(int i= 0; i <s.size(); i++){
            if(substr.find(s[i])==s.npos){
                substr += s[i];
                if (substr.size() > max_substr.size()){
                    max_substr = substr;         
                }
            }
            else{
                start += 1;
                i = start;
                substr = s[i];
            }
        }
        return max_substr.size();
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    string s = "abcabcbb";
    std::cout << s.npos << std::endl;
    std::cout << Solution().lengthOfLongestSubstring(s) << std::endl;
    s = "";
    std::cout << Solution().lengthOfLongestSubstring(s) << std::endl;
    s = "bbbbb";
    std::cout << Solution().lengthOfLongestSubstring(s) << std::endl;
    s = "pwwkew";
    std::cout << Solution().lengthOfLongestSubstring(s) << std::endl;
    s = "aab";
    std::cout << Solution().lengthOfLongestSubstring(s) << std::endl;
    s = "dvdf";
    std::cout << Solution().lengthOfLongestSubstring(s) << std::endl;
    return 0;
}
