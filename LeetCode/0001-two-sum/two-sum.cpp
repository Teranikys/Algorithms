#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> v;
        vector<int> res(2);
        for (int i = 0; i < nums.size(); i++){
            if (v.contains(target - nums[i])) {
                res[0] = v[target - nums[i]];
                res[1] = i;
                break;
            }
            v[nums[i]] = i;
        }
        return res;
    }
};