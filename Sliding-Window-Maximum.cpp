1class Solution {
2public:
3    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
4        vector<int> s;
5        if (nums.empty()) return s;
6
7        int l = 0;
8        int r = k - 1;
9
10        // 1. Initial window
11        vector<int> current_window;
12        for (int i = 0; i <= r; i++) {
13            current_window.push_back(nums[i]);
14        }
15        
16        // Sort to find the max (last element)
17        vector<int> temp = current_window;
18        sort(temp.begin(), temp.end());
19        s.push_back(temp.back());
20
21        // 2. Slide the window
22        while (r + 1 < nums.size()) {
23            // "sum -= nums[l]" -> Find and remove nums[l] from current_window
24            for (int i = 0; i < current_window.size(); i++) {
25                if (current_window[i] == nums[l]) {
26                    current_window.erase(current_window.begin() + i);
27                    break;
28                }
29            }
30            l++;
31            r++;
32            
33            // "sum += nums[r]" -> Add new element
34            current_window.push_back(nums[r]);
35            
36            // Sort to find the new max
37            temp = current_window;
38            sort(temp.begin(), temp.end());
39            s.push_back(temp.back());
40        }
41
42        return s;
43    }
44};