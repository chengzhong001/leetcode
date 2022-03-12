class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        stack = []
        for i in s:
            if i == '(' or i == '[' or i == '{':
                stack.append(i)
            else:
                if len(stack) == 0:
                    return False
                if i == ')' and stack[-1] != '(':
                    return False
                if i == ']' and stack[-1] != '[':
                    return False
                if i == '}' and stack[-1] != '{':
                    return False
                stack.pop()
        return len(stack) == 0

if __name__ == "__main__":
    print(Solution().isValid("()"))
    print(Solution().isValid("()[]{}"))
    print(Solution().isValid("(]"))
    print(Solution().isValid("([)]"))
    print(Solution().isValid("{[]}"))
    print(Solution().isValid(""))
    print(Solution().isValid("(()"))
    print(Solution().isValid("(()[]{})"))
