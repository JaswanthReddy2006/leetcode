1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int l = 0;
5        int r = height.size() - 1;
6        int maxr = 0;
7
8        while (l < r) {
9            int h = min(height[l], height[r]);
10            int w = r - l;
11            
12            int currentArea = h * w;
13            maxr = max(maxr, currentArea);
14
15            if (height[l] < height[r]) {
16                l++;
17            } 
18            else {
19                r--;
20            }
21        }
22        return maxr;
23    }
24};