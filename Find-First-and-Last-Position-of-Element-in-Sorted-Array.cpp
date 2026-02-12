1class Solution {
2public:
3    vector<int> searchRange(vector<int>& nums, int target) {
4        
5        auto start = lower_bound(nums.begin(), nums.end(), target);
6        
7        auto end = upper_bound(nums.begin(), nums.end(), target);
8        
9        if (start != nums.end() && *start == target) {
10            return {(int)(start - nums.begin()), (int)(end - nums.begin() - 1)};
11        }
12        
13        return {-1, -1};
14    }
15};