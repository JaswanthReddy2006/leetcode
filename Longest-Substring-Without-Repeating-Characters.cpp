1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        set<char> st;
5        int r = 0;
6        int l = 0;
7        int max = 0;
8        int n = s.length();
9        int c = 0;
10        while (r < n) {
11            
12            while (r < n && st.find(s[r]) == st.end()) {
13                st.insert(s[r]);
14                c++;
15                r++;
16                if (c > max) {
17                    max = c;
18                }
19            }
20                st.erase(s[l]);
21                l++;
22                c--;
23            }
24            return max;
25        }
26    };