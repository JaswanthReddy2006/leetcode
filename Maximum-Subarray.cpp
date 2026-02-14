1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        
5        int csum=0;
6        int ans=-1e6;
7        for(int i=0;i<nums.size();i++){
8            csum+=nums[i];
9            ans=max(ans,csum);
10            if(csum<0){
11                csum=0;
12            }
13        }
14         return ans;
15    }
16   
17};