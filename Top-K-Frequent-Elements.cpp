1class Solution {
2public:
3    vector<int> topKFrequent(vector<int>& nums, int k) {
4        unordered_map<int, int> counts;
5        
6        for (int num : nums) {
7            counts[num]++;
8        }
9
10        vector<pair<int, int>> freqVec;
11        for (auto const& [val, freq] : counts) {
12            freqVec.push_back({freq, val});
13        }
14
15        sort(freqVec.rbegin(), freqVec.rend());
16
17        vector<int> result;
18        for (int i = 0; i < k; i++) {
19            result.push_back(freqVec[i].second);
20        }
21
22        return result;
23    }
24};