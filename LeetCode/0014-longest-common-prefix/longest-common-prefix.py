class Solution:
    def longestCommonPrefix(self, strs: list[str]) -> str:
        res = ""
        minim_len = min(len(elem) for elem in strs)
        for i in range(minim_len):
            for j in range(len(strs) - 1):
                if strs[j][i] != strs[j + 1][i]:
                    return res

            res += strs[0][i]

        return res