1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        sort(nums.begin(),nums.end());
5        vector<vector<int>>ans;
6        for(int i=0;i<nums.size();i++){
7            if(i>0&&nums[i]==nums[i-1]){
8                continue;
9            }
10            int j=i+1;
11            int k=nums.size()-1;
12            while(j<k){
13                int sum= nums[i]+nums[j]+nums[k];
14                if(sum<0){
15                    j++;
16                }
17                else if(sum>0){
18                    k--;
19                }
20                else{
21                    vector<int>temp={nums[i],nums[j],nums[k]};
22                    ans.push_back(temp);
23                    j++;
24                    k--;
25                    while(j<k&&nums[j]==nums[j-1]){
26                        j++;
27                    };
28                    while(j<k&&nums[k]==nums[k+1]){
29                        k--;
30                    };
31
32                }
33
34            }
35        }
36        return ans;
37        
38    }
39};