1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        int n = nums.size();
5        if (n <= 2) return n;
6
7        int j = 2; 
8        for (int i = 2; i < n; i++) {
9           
10            if (nums[i] != nums[j - 2]) {
11                nums[j] = nums[i];
12                j++;
13            }
14        }
15        return j; 
16    }
17};