1class Solution {
2public:
3    bool isPalindrome(int x) {
4        string g=to_string(x);
5        string d=g;
6        reverse(d.begin(),d.end());
7        if(d==g)
8        return true;
9        else
10        return false;
11
12        
13    }
14};