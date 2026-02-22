1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        map<int,int>m;
5        for(int i=0;i<nums.size();i++){
6            int comp=target-nums[i];
7            if(m.find(comp)!=m.end()){
8                return {i,m[comp]};
9            }
10            else{
11                m.insert({nums[i],i});
12            }
13        }
14        return {};
15        
16    }
17};
18
19
20