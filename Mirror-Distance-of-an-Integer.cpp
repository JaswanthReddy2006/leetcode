1class Solution {
2public:
3    int mirrorDistance(int n) {
4        string re=to_string(n);
5        reverse(re.begin(),re.end());
6        return(abs(n-stoi(re)));
7        
8    }
9};