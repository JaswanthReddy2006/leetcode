1class Solution {
2public:
3    void rotate(vector<int>& nums, int k) {
4        int n = nums.size();
5        k = k % n;
6        if (k == 0) return;
7
8        reverse(nums.begin(), nums.end());
9        reverse(nums.begin(), nums.begin() + k);
10        reverse(nums.begin() + k, nums.end());
11    }
12};