#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int result = 0, l = 0;
        vector<int> mp(256, -1);
        for (int r = 0; r < s.size(); r++){
            if (mp[s[r]] == -1 or l > mp[s[r]]){
                result = max(result, r - l + 1);
            } else {
                l = mp[s[r]] + 1;
            }
            mp[s[r]] = r;
        }
        return result;
    }
};