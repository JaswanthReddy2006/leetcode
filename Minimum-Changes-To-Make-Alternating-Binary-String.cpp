1class Solution {
2public:
3    int minOperations(string s) {
4        int count = 0;
5        int n = s.length();
6        
7        for (int i = 0; i < n; ++i) {
8            if (s[i] - '0' != i % 2) {
9                count++;
10            }
11        }
12        
13        return min(count, n - count);
14    }
15};