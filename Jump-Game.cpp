1class Solution {
2public:
3    bool canJump(std::vector<int>& nums) {
4        int reachable = 0;
5        int n = nums.size();
6        
7        for (int i = 0; i < n; ++i) {
8            // If the current index is greater than the max reachable index, 
9            // it's impossible to proceed further.
10            if (i > reachable) {
11                return false;
12            }
13            
14            // Update the maximum reach
15            reachable = std::max(reachable, i + nums[i]);
16            
17            // Optimization: If we can already reach the last index, return true
18            if (reachable >= n - 1) {
19                return true;
20            }
21        }
22        
23        return true;
24    }
25};