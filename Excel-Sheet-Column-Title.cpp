1class Solution {
2public:
3    string convertToTitle(int columnNumber) {
4        string res = "";
5        while (columnNumber > 0) {
6            // Adjust to 0-indexed for modulo arithmetic
7            columnNumber--; 
8            
9            char c = 'A' + (columnNumber % 26);
10            res += c;
11            
12            columnNumber /= 26;
13        }
14        
15        reverse(res.begin(), res.end());
16        return res;
17    }
18};