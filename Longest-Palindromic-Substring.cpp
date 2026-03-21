1
2
3class Solution {
4public:
5    string longestPalindrome(string s) {
6        if (s.empty()) return "";
7        
8        int start = 0, end = 0;
9        
10        for (int i = 0; i < s.length(); i++) {
11            // Case 1: Odd length (e.g., "aba")
12            int len1 = expandAroundCenter(s, i, i);
13            // Case 2: Even length (e.g., "abba")
14            int len2 = expandAroundCenter(s, i, i + 1);
15            
16            int maxLen = max(len1, len2);
17            
18            if (maxLen > (end - start)) {
19                // Adjusting start/end based on center 'i' and total length 'maxLen'
20                start = i - (maxLen - 1) / 2;
21                end = i + maxLen / 2;
22            }
23        }
24        
25        return s.substr(start, end - start + 1);
26    }
27
28private:
29    int expandAroundCenter(string s, int left, int right) {
30        while (left >= 0 && right < s.length() && s[left] == s[right]) {
31            left--;
32            right++;
33        }
34        // Calculation for length: (right - 1) - (left + 1) + 1 = right - left - 1
35        return right - left - 1;
36    }
37};