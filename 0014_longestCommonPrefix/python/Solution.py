class Solution:
    def longestCommonPrefix(self, strs: list[str]) -> str:
        if len(strs) == 0:
            return ""
        prefix = strs[0]
        for word in strs[1:]:
            while word.find(prefix) != 0:
                prefix = prefix[0:-1]
                if prefix == "":
                    return ""
        return prefix


if __name__ == "__main__":
    s = Solution()
    print(s.longestCommonPrefix(["flower", "flow", "flight"]))
    print(s.longestCommonPrefix(["dog", "racecar", "car"]))
    print(s.longestCommonPrefix(["c", "c"]))
    print(s.longestCommonPrefix(["a"]))
    print(s.longestCommonPrefix([]))
    print(s.longestCommonPrefix(["c","acc","ccc"]))