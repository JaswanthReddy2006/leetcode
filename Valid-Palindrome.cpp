1class Solution {
2public:
3    bool isPalindrome(string s) {
4        int l = 0;
5        int r = s.length() - 1;
6
7        while (l < r) {
8
9            if (!isalnum(s[l])) {
10                l++;
11            } 
12            else if (!isalnum(s[r])) {
13                r--;
14            } 
15            else {
16                if (tolower(s[l]) != tolower(s[r])) {
17                    return false;
18                }
19                l++;
20                r--;
21            }
22        }
23        return true;
24    }
25};