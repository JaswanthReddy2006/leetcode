1class Solution {
2public:
3    int findContentChildren(vector<int>& g, vector<int>& s) {
4        sort(g.begin(), g.end());
5        sort(s.begin(), s.end());
6        int child = 0;
7        int cookie = 0;
8        while (child < g.size() && cookie < s.size()) {
9            if (s[cookie] >= g[child]) {
10                child++;
11            }
12            cookie++;
13        }
14        return child;
15    }
16};