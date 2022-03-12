#include <iostream>
#include <stack>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        std::stack<char> *stack = new std::stack<char>();
        for (char &c : s)
        {
            if (c == '(' || c == '[' || c == '{')
            {
                stack->push(c);
            }
            else
            {
                if (stack->empty())
                {
                    return false;
                }
                char top = stack->top();
                if (top == '(' && c == ')')
                {
                    stack->pop();
                }
                else if (top == '[' && c == ']')
                {
                    stack->pop();
                }
                else if (top == '{' && c == '}')
                {
                    stack->pop();
                }
                else
                {
                    return false;
                }
            }
        }
        return stack->empty();
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    Solution s;
    std::cout << s.isValid("()") << std::endl;
    std::cout << s.isValid("()[]{}") << std::endl;
    std::cout << s.isValid("(]") << std::endl;
    std::cout << s.isValid("([)]") << std::endl;
    std::cout << s.isValid("{[]}") << std::endl;

    return 0;
}
